<div align="center">

<br/>

<img src="Circuit%20Diagram/Halo.png" width="900"/>

<br/>

# Halo

**A Modern Rechargeable RGB Desk Lamp — Inspired by the ROYGBIV Rainbow Spectrum**

<br/>

[![youtube](https://www.readmecodegen.com/api/social-icon?name=youtube&size=32&shape=circle&reverseBackground=true&textAlignment=horizontal&showText=true&link=https%3A%2F%2Fyoutube.com%2F%40NextBuilderIO)](https://youtube.com/@NextBuilderIO)
[![instagram](https://www.readmecodegen.com/api/social-icon?name=instagram&size=32&shape=circle&reverseBackground=true&textAlignment=horizontal&showText=true&link=https%3A%2F%2Finstagram.com%2Fnext_builder)](https://instagram.com/next_builder)
[![x](https://www.readmecodegen.com/api/social-icon?name=x&size=34&shape=circle&reverseBackground=true&textAlignment=horizontal&showText=true&link=https%3A%2F%2Fx.com%2FNEXTBUILDERIO)](https://x.com/NEXTBUILDERIO)
[![linkedin](https://www.readmecodegen.com/api/social-icon?name=linkedin&size=32&shape=circle&reverseBackground=true&textAlignment=horizontal&showText=true)](https://www.linkedin.com/company/nextbuilderIO/)
[![instructables](https://www.readmecodegen.com/api/social-icon?name=instructables&size=30&shape=circle&reverseBackground=true&textAlignment=horizontal&showText=true&link=https%3A%2F%2Fwww.instructables.com%2Fmember%2FNext%2520Builder%2520DIY%2F)](https://www.instructables.com/member/Next%20Builder%20DIY/)
[![hackster](https://www.readmecodegen.com/api/social-icon?name=hackster&size=30&shape=circle&reverseBackground=true&textAlignment=horizontal&showText=true&link=https%3A%2F%2Fhackster.io%2FNEXTBUILDER)](https://hackster.io/NEXTBUILDER)
[![hackaday](https://www.readmecodegen.com/api/social-icon?name=hackaday&size=32&shape=circle&reverseBackground=true&textAlignment=horizontal&showText=true&link=https%3A%2F%2Fhackaday.io%2FNextBuilder)](https://hackaday.io/NextBuilder)

</div>

<br/>

## 🌈 Overview

Lighting can completely transform the feel of a workspace — and **Halo** was built to bring warm, vibrant ambient light into a clean, modern form factor.

Designed entirely in **Autodesk Fusion 360**, Halo houses a **Waveshare ESP32-C3 Mini**, a rechargeable **18650 Li-ion battery**, and **Waveshare's newly launched ultra-slim RGB LED strip** inside a compact **3D-printed enclosure**. At just **2.7 mm** thick, the LED strip tucks neatly into the circular diffuser ring, producing smooth, even lighting with no visible hotspots.

Once powered on, the firmware automatically cycles through the full **ROYGBIV rainbow spectrum**, holding each color for **5 seconds** before transitioning to the next. A **USB Type-C** charging port keeps things cable-free during use, so Halo can sit anywhere — a desk, a nightstand, a shelf, or a gaming setup — without being tethered to a wall outlet.

This repository contains everything needed to build one yourself: firmware, CAD files, STL models, wiring diagrams, and complete documentation.

<br/>

## 🎬 Demo

<div align="center">

<a href="https://www.youtube.com/watch?v=-MNN4E8rFD4">
<img src="https://img.youtube.com/vi/-MNN4E8rFD4/maxresdefault.jpg" width="800"/>
</a>

<br/>

<sub>▶ Click above to watch the complete build and demonstration on YouTube.</sub>

</div>

<br/>

## 🔩 Hardware Used

Halo uses a simple collection of readily available components, making it an excellent beginner-friendly electronics and 3D-printing project.

<div align="center">
<img src="Circuit%20Diagram/2.png" width="700"/>

<br/>

<sub>Components used to build Halo</sub>

</div>
<br/>

## 🧊 CAD Design

Halo's enclosure was modeled from scratch in **Autodesk Fusion 360.** The complete Fusion 360 source files and exported STL models are included in this repository, ready to slice and print on any standard FDM printer.

<div align="center">
<img src="Circuit%20Diagram/CAD.png" width="700"/>

<br/>

<sub>Halo's enclosure modeled in Autodesk Fusion 360</sub>
</div>
<br/>

## ⚙️ How It Works

At the heart of Halo is the **Waveshare ESP32-C3 Mini**, programmed using the **Arduino IDE** and the **FastLED** library.

On power-up, the ESP32-C3 drives the RGB LED strip through a continuous **ROYGBIV** cycle, holding each color for **5 seconds** before smoothly transitioning to the next — a relaxing ambient effect that runs entirely on its own, with no buttons, app, or remote needed.

Power comes from a rechargeable **18650 Li-ion battery**, and the integrated **USB-C charging module** means you can top it up without ever opening the enclosure.

Together, the CAD design, 3D printing, embedded firmware, and RGB lighting come together into a compact desk lamp that looks and feels like a commercial product — while remaining fully open for customization.

<br/>

## 📚 Build Guides and Documentation

Complete assembly instructions and testing procedures are available in the tutorials below — from 3D printing the enclosure to uploading the firmware and assembling the final product.

- **Instructables:** [Halo – A Modern Desk Lamp](https://www.instructables.com/Halo-a-Modern-Desk-Lamp/)
- **Hackster.io:** [Halo – A Modern Desk Lamp](https://www.hackster.io/NEXTBUILDER/halo-a-modern-desk-lamp-083fcc)
- **Hackaday.io:** [Halo – A Modern Desk Lamp](https://hackaday.io/project/206225-halo-a-modern-desk-lamp)

All project resources — including firmware, CAD models, STL files, and circuit diagrams — are available in this GitHub repository.

<br/>

## 📄 License

This project is provided for **personal and educational use only**.

Commercial use, resale, redistribution, or inclusion in commercial products is prohibited without prior written permission from the author. For licensing or collaboration inquiries, reach out via the social links above.

<br/>

<div align="center">

Built with ❤️ by **[Next Builder](https://youtube.com/@NextBuilderIO)**

</div>
