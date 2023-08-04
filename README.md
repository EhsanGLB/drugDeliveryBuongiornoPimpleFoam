# drugDeliveryBuongiornoPimpleFoam
This is a solver for drug delivery and unsteady forced convection heat transfer of nanofluid using the Buongiorno model to consider nanoparticle distribution written based on foam-extend-4.1.


## Mathematical Relationships
 $$ \nabla . U = 0 $$

$$ {dU \over dt} + {(U . \nabla) U} = - {1 \over \rho_{nf}} \nabla p + \nu_{nf} \nabla . {\nabla U} $$

$$ {dT \over dt} + {U . \nabla T} = \alpha_{nf} {\nabla}^2 T $$

$$ {d \phi \over dt} + {U . \nabla \phi} = D_b {\nabla}^2 \phi + {D_T \over T} {\nabla}^2 T $$

$$ D_B = {{k_B T} \over {3 \pi \mu_f \ d_{np}}} $$

$$ D_T = 0.26 {{\kappa_f} \over {2 \kappa_f + \kappa_np}} {\mu_f \over \rho_f} \phi $$

$$ \rho_{nf} = \rho_{np} \phi + \rho_f (1 - \phi) $$

$$ C_{p,nf} = {{ \rho_{np} C_{p,np} \phi + \rho_f C_{p,f} (1 - \phi)} \over \rho_{nf}} $$

$$ {\kappa_{nf} \over \kappa_f} = { {2 \kappa_f + \kappa_{np} + 2 \phi ( \kappa_{np} - \kappa_f)} \over {2 \kappa_f + \kappa_{np}- \phi ( \kappa_{np}- \kappa_f)} } $$

$$ {\mu_{nf} \over \mu_f} = {1 \over (1 - \phi)^{2.5}} $$

Which $U$, $p$, $T$, and $\phi$ are velocity vector, pressure, temperature, and nanoparticle concentration, respectively. And $\rho$, $C_p$, $\kappa$, $\mu$, $\nu$, and $\alpha$ are density, specific heat capacity, thermal conductivity, dynamic viscosity, kinematic viscosity, and thermal diffusivity, respectively. Also, subscription $f$, $np$, and $nf$ depict fluid, nanoparticle, and nanofluid, respectively. Moreover, $D_B$, $D_T$m and $d_{np}$ are Brownian diffusion, thermophoresis diffusion, and nanoparticle diameter, respectively.


## Installation
It is working on foam-extend-4.1
```bash
git clone https://github.com/EhsanGLB/drugDeliveryBuongiornoPimpleFoam.git
cd drugDeliveryBuongiornoPimpleFoam/transportModels
./Allwmake
cd ../drugDeliveryBuongiornoPimpleFoam
wmake
cd ../case
```


## Getting Started
1. First way
```bash
blockMesh
drugDeliveryBuongiornoPimpleFoam
```

2. Second way
```bash
./Allrun
```


## References
* [Golab, Ehsan, Behzad Vahedi, Ankur Jain, Robert A. Taylor, and Kambiz Vafai. "Laminar forced convection in a tube with a nano-encapsulated phase change materials: Minimizing exergy losses and maximizing the heat transfer rate." Journal of Energy Storage 65 (2023): 107233.](https://www.sciencedirect.com/science/article/abs/pii/S2352152X23006308)
* [Vahedi, Behzad, Ehsan Golab, Arsalan Nasiri Sadr, and Kambiz Vafai. "Thermal, thermodynamic and exergoeconomic investigation of a parabolic trough collector utilizing nanofluids." Applied Thermal Engineering 206 (2022): 118117.](https://www.sciencedirect.com/science/article/abs/pii/S1359431122000813)
* [Golab, Ehsan, Sahar Goudarzi, Hamed Kazemi-Varnamkhasti, Hossein Amigh, Ferial Ghaemi, Dumitru Baleanu, and Arash Karimipour. "Investigation of the effect of adding nano-encapsulated phase change material to water in natural convection inside a rectangular cavity." Journal of Energy Storage 40 (2021): 102699.](https://www.sciencedirect.com/science/article/abs/pii/S2352152X21004357)
* [Abbasi, Mohammad, Amin Nadimian Esfahani, Ehsan Golab, Omid Golestanian, Nima Ashouri, S. Mohammad Sajadi, Ferial Ghaemi, Dumitru Baleanu, and A. Karimipour. "Effects of Brownian motions and thermophoresis diffusions on the hematocrit and LDL concentration/diameter of pulsatile non-Newtonian blood in abdominal aortic aneurysm." Journal of Non-Newtonian Fluid Mechanics 294 (2021): 104576.](https://www.sciencedirect.com/science/article/abs/pii/S0377025721000859)
* [Jafarzadeh, Sina, Arsalan Nasiri Sadr, Ehsan Kaffash, Sahar Goudarzi, Ehsan Golab, and Arash Karimipour. "The effect of hematocrit and nanoparticles diameter on hemodynamic parameters and drug delivery in abdominal aortic aneurysm with consideration of blood pulsatile flow." Computer Methods and Programs in Biomedicine 195 (2020): 105545.](https://www.sciencedirect.com/science/article/abs/pii/S0169260720307914)
* [Goudarzi, Sahar, Masih Shekaramiz, Alireza Omidvar, Ehsan Golab, Arash Karimipour, and Aliakbar Karimipour. "Nanoparticles migration due to thermophoresis and Brownian motion and its impact on Ag-MgO/Water hybrid nanofluid natural convection." Powder Technology 375 (2020): 493-503.](https://www.sciencedirect.com/science/article/abs/pii/S0032591020307397)
* [Motlagh, Saber Yekani, Ehsan Golab, and Arsalan Nasiri Sadr. "Two-phase modeling of the free convection of nanofluid inside the inclined porous semi-annulus enclosure." International Journal of Mechanical Sciences 164 (2019): 105183.](https://www.sciencedirect.com/science/article/abs/pii/S0020740319315279)




