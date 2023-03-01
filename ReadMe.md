<!--
SPDX-FileCopyrightText: 2023 Terry Turtle <librewater@posteo.net>
SPDX-FileCopyrightText: 2023 inspyros <spyros@bluegreece.org>

SPDX-License-Identifier: CC-BY-SA-4.0
-->

# Acraea-Prototype

[![License: CERN-OHL-S-2.0](
    https://img.shields.io/badge/License-CERN--OHL--S--2.0-blue.svg)](
    https://spdx.org/licenses/CERN-OHL-S-2.0.html)
[![License: CC-BY-SA-4.0](
    https://img.shields.io/badge/License-CC%20BY--SA%204.0-blue.svg)](
    https://creativecommons.org/licenses/by-sa/4.0/)
[![REUSE status](
    https://api.reuse.software/badge/codeberg.org/LibreWater/Acraea-Prototype)](
    https://api.reuse.software/info/codeberg.org/LibreWater/Acraea-Prototype)
[![OSH Openness](
    https://osegermany.gitlab.io/ohloom/osh-badge-openness.svg)](
    https://osegermany.gitlab.io/ohloom/osh-report.html)

Acraea is a Small Scale Solar Desalination and Water Purification Prototype. \
It is powered by electric heating for scientific purpose
and for prototyping ahead according to the Libre Water Mission:

> Providing Free and Open Source Hardware Designs for Solar-thermal Desalination
> that can be manufactured and innovated locally in Makerspaces across the world

## License

Hardware and Firmware is licensed under the [CERN-OHL-S v2 license](
https://ohwr.org/cern_ohl_s_v2.txt)

Documentation is licensed under a
[Creative Commons Attribution-ShareAlike 4.0 International License](
https://creativecommons.org/licenses/by-sa/4.0/) \
This applies to all design files (CAD, BOM, etc.).

## Disclaimer

> THE DESIGN IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
> IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
> FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
> IN NO EVENT SHALL THE AUTHORS OR RIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
> DAMAGES OR OTHER LIABILITY,
> WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
> OUT OF OR IN CONNECTION WITH THE DESIGN OR THE USE OR OTHER DEALINGS IN THE DESIGN.

## Acraea - Short Info

### Acraea is

- [x] a [fresh water Nymph](https://en.wikipedia.org/wiki/Acraea)
  from ancient Greek mythology.
- [x] a Small Scale Desalination and Water Purification Prototype
  that is powered by electric heating
  and has a built-in energy recovery using four stages.
- [ ] patented
- [x] [free (as in freedom) - so anyone can study, modify, distribute, make,
  and sell the design](https://www.oshwa.org/definition/)

### Version 2.0 of Acraea is

- [x] able to produce a limited amount of pure water from almost any water source
- [x] a Modular Design compatible for adaptation to solar-thermal
  and other heat sources
- [x] a Circular Design compatible for flexible mid-term design evolution
- [x] Compatible for modular scale-up

![__Img.01__: Render of assembled Prototype](
res/assets/media/img/Acraea2.0_white.jpg)

## Project Context

### This design is part of the Prototyping for LibreWater

### Mission of LibreWater

Providing Free and Open Source Hardware Designs for Solar-thermal Desalination
that can be manufactured and innovated locally in Makerspaces across the world

### Currently hosted by

Blue Greece - an Open Source Hardware Developer Collective

### Owned by

Turtles

### Here is a short intro video on Libre Water from a design contest in January 2023

[![](
res/assets/media/img/Preview_Pitch_Play.jpg)](
https://www.youtube.com/watch?v=Ojm_Nrax2sg)

## Core Technology: Vertical Multiple-Effect-Distillation

The [process of the rain](
https://upload.wikimedia.org/wikipedia/commons/b/b1/Diagram_of_the_Water_Cycle.jpg)
in a box with integrated energy recovery.

Water is evaporated to clean steam and condensed again on an array of metal plates:
Creating highly pure water from almost any water source
without the need for special filters. #nofilter
The heat from the condensation process is recovered (_Img.04_)
and heating the next saltwater film for evaporation.

Check out a short video of the running module here:

[![](
res/assets/media/img/Preview_YouTube_VMED_play.jpg)](
https://www.youtube.com/watch?v=kDWv2w7YqlU)

![__Img.03__: Acraea 2.0 Running with removed sidewall](
res/assets/media/img/VMED_Process_Drops.jpg)

Heating plate on left corner of the photograph.
Drops are growing from the condensation of pure steam.

![__Img.04__: Process Schematics](
res/assets/media/img/VMED_Process_Schematics.jpg)

The heat from condensation of fresh water is transferred ot the next stage

## Use-Cases: What is this prototype good for

### Makerspace Co-Creation

- Decentralized collaboration on design
- Accessible and fast iterations in early stage

### Research

- accessible setup for the functioning principle of Multiple-Effect-Distillation
- experimenting with heat transfer across plates and stages
- experimenting with fluid dynamics with different wicks or wick-free structures
- study behaviour of alternative materials & biomaterials

### Education

- simple production and assembly
- high responsiveness: fast start-up time
- uniting a broad field of disciplines: 3D Printing,
  CNC Milling, Sewing, Coding, Electronics
- familiarizing with Open Source Collaboration

## Modular Design Approach

Acraea has been designed with circularity and modularity in mind.
For the full part overview with more details,
check out the [Bill-Of-Materials](gen/bom.pdf).
For following our design choices and to bring in your own ideas,
please check out DesignPath.pdf (comming soon) <!-- TODO Add this file! -->

![__Img.05__: Render: Explosion View](
res/assets/media/img/Acraea_2.0_Render_Explosion_View.jpg)

![__Img.06__: Render: Top view of components](
res/assets/media/img/Components_Top_View.jpg)

### Module: Casing

- CNC-Machined Plywood

### Module: Plates

- Plate size: 300 mm x 200 mm x 0,5 mm
- Plate Material: Aluminum

### Module: Heating

- Electric: 24V IPX7 Silicon Patches (note: currently still proprietary)

### Module: Fluid System

- Feed: FDM-Printed PETG
- Drainage: FDM-Printed PETG
- Sealing feed: Bicycle tube

## Manufacturing: Required tools & machinery

- 3D Printer (25 cm build size, e.g. Prusa i3)
- Sewing machine
- Jigsaw or CNC Mill
- basic workshop equipment

Please mind the time it takes to 3D-Print the PETG Parts:
one drainage can take about 3 hours;
the parts of the tank all together also 6 hours.

## Assembly

We are working on different approaches for assembly instructions.
We found the approach of OSH-AUTODOC to be most meaningful
and would be happy to hear your feedback.
Generally, we also provide How-To Videos on major releases.

### Assembly Manual

Follow the [Assembly Manual](gen/assembly/assembly-manual.pdf)
for Step-by-step instructions.
They were created with kind support of OSH-AUTODOC & JC. \
[OSH-AUTODOC](https://codeberg.org/osh-autodoc) is a FreeCAD Add-On under development,
to (semi) automatically generate documentation for Open Source Hardware. \
For more details, please contact JC or Pieter. <!-- TODO Add contact info/link! -->

![__Img.07__: Example of OSH-Autodoc generated assembly manual](
res/assets/media/img/OSH-Autodoc_Preview.jpg)

### Videos

Stay tuned!
We are revising the video-assembly with the latest design update
and will share it shortly.
If you would like to engage and have ideas how to make clear and fun tutorials,
please reach out to us on <mailto:librewater@posteo.net>.

![__Img.08__: Screenshot of How-To Assembly Video](
res/assets/media/img/Assembly_Video_Screenshot.png)

### Process Control

### Heat input

The current approach is to have a constant power input of P = 150 W.
This is done by adjusting the On- and Off-switching times
by an Arduino or ESP32 controlled relay,
connected to a 24 V power supply which is powering three 24 V heating pads
on the first stage.

-> Check out the [Wiring instructions](gen/assembly/wiring.pdf)
for the setup and the code under [TurtleHeat_v3.ino](src/firmware/TurtleHeat.ino).

### Feed water input

The water level (hydrostatic pressure) in the tank
regulates the inflow of the non-drinkable water.
Filling it up to 2 cm creates maximum feed flow rate.
Testing & Validation
Vertical Multiple-Effect-Distillation is a simple process:
Quality and safety can be tested by electric conductivity with a TDS sensor.
Performance can be assessed by knowing the electric heat input
relative to the water output

-> For more details, check out our Testing.md (draft stage)

## Research: Acraea for Open Science

Over the past 60 years, countless scientists and a few entrepreneurs
have worked on Solar-Powered Multiple-Effect-Distillation. \
One of the most recent reviews is from January 2022
by Lim et al. from Korea Institute of Machinery & Materials: \
[Designs and performance analysis of vertical multi-effect diffusion solar distiller:
A review - ScienceDirect (OpenAccess)](
https://www.sciencedirect.com/science/article/pii/S0011916422000273)

-> Check out selected sources and more info
in the Science Folder (soon) <!-- TODO Add this folder! -->

## Ideas for next Iterations

- [ ] Electric heating system: replace with locally producable alternative
- [ ] Adding a tank for longer operation
- [ ] Increase energy efficiency by adding more stages
- [ ] Testing an improved Wick design
- [ ] Testing Wick-Free designs
- [ ] Scaling Up
- [ ] Adding insulation
- [ ] Adding Solar-Thermal Heating Module

## Contact

Would you like to flow along?
Do you have any questions, ideas or general feedback?

For any inquiries, suggestions, collaborations or just spreading your love,
you may reach us at <mailto:librewater@posteo.net>.

![__Img.09__: Invitation from the SeaEO of LibreWater](
res/assets/media/img/SeaEO.jpg)

## Related Open Source Hardware Projects

We thank Michael for his [Solar Pura](
https://www.appropedia.org/Solar_Pura:_High-efficiency_vertical_solar_still) work,
and Florian for his [MED Prototype](https://github.com/fsteckel/OpenWater).

## Contributions from Individuals

The list of contributors and supporters is endless.
What would be an appropriate way to mention all of them?
Is it meaningful to do so?
We are still thinking about how to give credit
and also give back in the best way. \
One thing is for sure:
Without the support of countless kind people from all over the world,
we would never have gone on this adventure.
You know who you are.
It has been most importantly your ideas, your feedback, our sharing of time -
often a little, sometimes a lot that has made this project a reality.

This is the magic of Open Source Hardware,
the magic of people joining together with collective intelligence.

## Support from Institutions and Spaces

In alphabetical order:

- [Bodossaki Foundation Social Dynamo](https://www.socialdynamo.gr/en/social-dynamo/)
  (Athens)
- [Curious Community Labs](https://curious.bio/) (Hamburg)
- [Fabulous St.Pauli](https://www.fablab-hamburg.org/) (Hamburg)
- [Fab City Hamburg](https://www.fabcity.hamburg) (Hamburg)
- [Hackerspace.gr](https://www.hackerspace.gr) (Athens)
- [Helidoni Foundation](https://www.helidonifoundation.org/) (Athens)
- [MIT Water Innovation Prize Semifinals](http://www.mitwaterinnovation.org/) (global)
- [Odyssea](https://odyssea.com) (Athens)
- [Open Hardware Makers](https://openhardware.space/) (global)
- [P2Plab](https://www.p2plab.gr/en/) (Greece)
- [Prototype Fund Hardware](https://hardware.prototypefund.de/) (Berlin)

## Safety Disclaimer

This design has not been tested extensively.
It has to be regarded as not yet suitable for:

- production of water for any other case other than scientific research
- Operation without supervision by a skilled operator
- Use in external environment

Please be aware that building a water machine can be dangerous
and requires full awareness of the risks involved.
Blue Greece/Libre Water does not warrant for any contents of the manual
and does not assume any risks whatsoever with regard to the contents of this manual
or the machine assembled by you.
Blue Greece/Libre Water further does not warrant for
and does not assume any risks whatsoever with regard to any parts of the machine
contained in this manual which are provided by third parties.
You need to have the necessary experience in handling the machinery
required to build the machine described in this manual.
Otherwise you should seek professional advice for building the machine.
