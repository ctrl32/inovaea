# inovaea

Open-source home automation hardware – firmware and hardware in one repository.

## Repository layout

| Directory | Content | License |
|---|---|---|
| [`firmware/`](firmware/) | Device firmware (ESP32, PlatformIO) | GPL-3.0-or-later |
| [`hardware/`](hardware/) | PCB (KiCad) and enclosure (FreeCAD) | CERN-OHL-S-2.0 |
| [`docs/`](docs/) | Documentation | CC-BY-SA-4.0 |

## Getting started

### Firmware

```bash
cd firmware
pio run                 # build
pio run -t upload       # flash
pio device monitor      # serial monitor
```

Requires [PlatformIO](https://platformio.org/).

### Hardware

Open `hardware/pcb/` in [KiCad](https://www.kicad.org/) 9 and `hardware/enclosure/` in [FreeCAD](https://www.freecad.org/) 1.0 or newer.

## Contributing

Contributions are welcome – see [CONTRIBUTING.md](CONTRIBUTING.md).
Security issues: see [SECURITY.md](SECURITY.md).

## License

inovaea uses different licenses for different parts of the project – see [LICENSE](LICENSE).
All parts are under strong copyleft licenses: if you distribute modified versions,
you must publish the source under the same license.
The inovaea name and logo are covered by [TRADEMARKS.md](TRADEMARKS.md).

© 2026 ctrl32
