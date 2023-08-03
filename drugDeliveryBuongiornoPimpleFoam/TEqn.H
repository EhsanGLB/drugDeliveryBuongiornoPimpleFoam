{
    volScalarField kappaEff
    (
        "kappaEff",
        kappa/(rho * Cp) + turbulence->nut()/Prt
    );

    kappaEff.correctBoundaryConditions();

    fvScalarMatrix TEqn
    (
        fvm::ddt(T)
      + fvm::div(phi, T)
      - fvm::laplacian(kappaEff, T)
    );

    TEqn.relax();
    TEqn.solve();

    rho = alpha*rho_np+(1-alpha)*rho_f;
    Cp = (alpha*rho_np*Cp_np + (1-alpha)*rho_f*Cp_f) / rho;
    kappa = ( (2*kappa_f+kappa_np+2*alpha*(kappa_np-kappa_f)) / (2*kappa_f+kappa_np-alpha*(kappa_np-kappa_f)) )*kappa_f;
    dimensionedScalar KB("KB", dimensionSet(1, 2, -2, -1, 0, 0, 0), 1.38064e-23);
    Db = KB*T/(3.0*3.14*mu_f*d_np);
    DT = 0.26*(kappa_f/(2.0*kappa_f+kappa_np))*(mu_f/rho_f)*alpha;
}
