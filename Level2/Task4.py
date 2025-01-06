"""
Temperature Converter in Python
Cognifyz internship Intermediate Level->Task 2
Objective: Enable users to input temperatures
and choose the conversion direction between
Fahrenheit and Celsius.

"""


from customtkinter import *

def TempConvert():
    if radio_var.get() == 1:
        try:
            far = float(temp.get())
            celsius = (far - 32) * 5/9
            resultLabel.configure(text=f"{far:.2f}°F = {celsius:.2f}°C")
        except ValueError:
            resultLabel.configure(text="Invalid input")
    elif radio_var.get() == 2:
        try:
            cel = float(temp.get())
            fahrenheit = (cel * 9/5) + 32
            resultLabel.configure(text=f"{cel:.2f}°C = {fahrenheit:.2f}°F")
        except ValueError:
            resultLabel.configure(text="Invalid input")
    else:resultLabel.configure(text=" ")

app = CTk()

app.geometry("400x300")
app.title("Temperature Converter")

labelTemp = CTkLabel(app, text="Enter Temperatuere", fg_color="transparent",justify="left",font=("Ariel black",15))
temp:float = CTkEntry(app, placeholder_text="Enter")
convertedTemp= temp.get()
resultLabel = CTkLabel(app,text=" ",fg_color="transparent",justify="right",font=("Helvetica",13))
radio_var = IntVar(value=0)
cel = CTkRadioButton(app, text="Convert to Celsius     ",command=TempConvert, variable= radio_var, value=1,radiobutton_width=12,radiobutton_height=12,border_width_unchecked=2,border_width_checked=2,font=("Helvetica",13))
far = CTkRadioButton(app, text="Convert to fahrenheit",command=TempConvert, variable= radio_var, value=2,radiobutton_width=12,radiobutton_height=12,border_width_unchecked=2,border_width_checked=2,font=("Helvetica",13))
labelTemp.pack(pady=10)
temp.pack()
cel.pack(pady=15)
far.pack(pady=5)
resultLabel.pack()
app.mainloop()