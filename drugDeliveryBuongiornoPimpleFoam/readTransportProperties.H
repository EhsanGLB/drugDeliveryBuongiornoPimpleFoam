
    // Laminar Prandtl number
    dimensionedScalar Pr(laminarTransport.lookup("Pr"));

    // Turbulent Prandtl number
    dimensionedScalar Prt(laminarTransport.lookup("Prt"));

    // Turbulent Schmidt number
    dimensionedScalar Sct(laminarTransport.lookup("Sct"));

    // Switch alpha
    word alphaSwitch(laminarTransport.lookup("alphaSwitch"));


    // Base fluid properties
    dimensionedScalar rho_f(laminarTransport.lookup("rho_f"));
    dimensionedScalar kappa_f(laminarTransport.lookup("kappa_f"));
    dimensionedScalar Cp_f(laminarTransport.lookup("Cp_f"));
    dimensionedScalar mu_f(laminarTransport.lookup("mu_f"));


    // Nanoparticle properties
    dimensionedScalar rho_np(laminarTransport.lookup("rho_np"));
    dimensionedScalar kappa_np(laminarTransport.lookup("kappa_np"));
    dimensionedScalar Cp_np(laminarTransport.lookup("Cp_np"));
    dimensionedScalar d_np(laminarTransport.lookup("d_np"));
