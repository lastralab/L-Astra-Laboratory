# Electro Arduino Laboratory
L'Astra Lab
by Tania Molina

Testing circuits in a virtual laboratory with Arduino

<img width="1111" alt="screenshot 2017-04-09 11 37 49" src="https://cloud.githubusercontent.com/assets/22894897/24838188/5cc6e974-1d19-11e7-9a42-a2bba056ee78.png">

Code:

<pre>
<font color="#aaaaaa">//OSCILLOSCOPE LAB + ArduinoUno</font>

<font color="#5e6d03">#define</font> <font color="#ffffff">Potentiometer</font> <font color="#ffffff">A2</font>
<font color="#5e6d03">#define</font> <font color="#ffffff">LED</font> <font color="#ffcd22">13</font>
 &nbsp;&nbsp;
<font color="#00979c">int</font> <font color="#ffffff">val</font> <font color="#aaaaaa">=</font> <font color="#ffcd22">10</font><font color="#ffffff">;</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;

<font color="#00979c">void</font> <font color="#5e6d03">setup</font><font color="#aaaaaa">(</font><font color="#aaaaaa">)</font> <font color="#aaaaaa">{</font>
 &nbsp;<font color="#d35400">pinMode</font><font color="#aaaaaa">(</font><font color="#ffffff">LED</font><font color="#aaaaaa">,</font> <font color="#00979c">OUTPUT</font><font color="#aaaaaa">)</font><font color="#ffffff">;</font> &nbsp;
<font color="#aaaaaa">}</font>

<font color="#00979c">void</font> <font color="#5e6d03">loop</font><font color="#aaaaaa">(</font><font color="#aaaaaa">)</font> <font color="#aaaaaa">{</font>
 &nbsp;<font color="#ffffff">val</font> <font color="#aaaaaa">=</font> <font color="#d35400">analogRead</font><font color="#aaaaaa">(</font><font color="#ffffff">Potentiometer</font><font color="#aaaaaa">)</font><font color="#ffffff">;</font> &nbsp;&nbsp;&nbsp;
 &nbsp;<font color="#d35400">digitalWrite</font><font color="#aaaaaa">(</font><font color="#ffffff">LED</font><font color="#aaaaaa">,</font> <font color="#00979c">HIGH</font><font color="#aaaaaa">)</font><font color="#ffffff">;</font> &nbsp;
 &nbsp;<font color="#d35400">delay</font><font color="#aaaaaa">(</font><font color="#ffffff">val</font><font color="#aaaaaa">)</font><font color="#ffffff">;</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
 &nbsp;<font color="#d35400">digitalWrite</font><font color="#aaaaaa">(</font><font color="#ffffff">LED</font><font color="#aaaaaa">,</font> <font color="#00979c">LOW</font><font color="#aaaaaa">)</font><font color="#ffffff">;</font> &nbsp;
 &nbsp;<font color="#d35400">delay</font><font color="#aaaaaa">(</font><font color="#ffffff">val</font><font color="#aaaaaa">)</font><font color="#ffffff">;</font> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
<font color="#aaaaaa">}</font>

<font color="#aaaaaa">/*OP AMP:</font>
<font color="#aaaaaa"></font>
<font color="#aaaaaa">To use the oscilloscope with other components you have to wire the positive input</font>
<font color="#aaaaaa">of the oscilloscope to the Vout of the Operational Amplifier and the negative</font>
<font color="#aaaaaa">input of the oscilloscope to the positive input of the Op Amp (to get an Inverter Circuit).</font>
<font color="#aaaaaa"></font>
<font color="#aaaaaa">*/</font>

</pre>

Simulator:

![l astralab](https://cloud.githubusercontent.com/assets/22894897/24838330/84a70264-1d1c-11e7-8261-c870e9721355.gif)
