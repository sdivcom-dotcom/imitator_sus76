#!/usr/bin/env python
import wx
import serial
import serial.tools.list_ports as port_list

class Example(wx.Frame):

    def __init__(self, *args, **kw):
        super(Example, self).__init__(*args, **kw)
        ports = list(port_list.comports())
        for p in ports:
            print(p)
            print("Напишите номер порта устройства с именем (Silicon Labs CP210x USB to UART Bridge)")
        a = input()
        b = 9600
        self.serial_port = serial.Serial(a, b, timeout=0.1)
        self.InitUI()
    def InitUI(self):
        pnl = wx.Panel(self)
        closeButton = wx.Button(pnl, label='Убрать шасси', pos=(20, 20))
        closeButton.Bind(wx.EVT_BUTTON, self.OnClose)
        closeButton = wx.Button(pnl, label='Выпустить шасси', pos=(20, 60))
        closeButton.Bind(wx.EVT_BUTTON, self.OnClose2)
        closeButton = wx.Button(pnl, label='Авария по левой стороне', pos=(20, 100))
        closeButton.Bind(wx.EVT_BUTTON, self.OnClose3)
        closeButton = wx.Button(pnl, label='Авария по правой стороне', pos=(20, 140))
        closeButton.Bind(wx.EVT_BUTTON, self.OnClose4)
        closeButton = wx.Button(pnl, label='Авария передней стойки', pos=(20, 180))
        closeButton.Bind(wx.EVT_BUTTON, self.OnClose5)
        closeButton = wx.Button(pnl, label='Авария всей гидросистемы', pos=(20, 220))
        closeButton.Bind(wx.EVT_BUTTON, self.OnClose6)
        closeButton = wx.Button(pnl, label='Тест ламп', pos=(20, 260))
        closeButton.Bind(wx.EVT_BUTTON, self.OnClose7)
        self.SetSize((340, 340))
        self.SetTitle('imitator')
        self.Centre()

    def OnClose(self, e):
        print("Убрать шасси")
        self.serial_port.write(b'1')
    def OnClose2(self, e):
        print("Выпустить шасси")
        self.serial_port.write(b'2')
    def OnClose3(self, e):
        print("Авария по левой стороне")
        self.serial_port.write(b'3')
    def OnClose4(self, e):
        print("Авария по правой стороне")
        self.serial_port.write(b'4')
    def OnClose5(self, e):
        print("Авария передней стойки")
        self.serial_port.write(b'5')
    def OnClose6(self, e):
        print("Авария всей гидросистемы")
        self.serial_port.write(b'6')
    def OnClose7(self, e):
        print("Тест ламп")
        self.serial_port.write(b'7')

def main():
    app = wx.App()
    ex = Example(None)
    ex.Show()
    app.MainLoop()

if __name__ == '__main__':
    main()