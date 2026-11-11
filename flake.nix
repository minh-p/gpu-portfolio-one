{
  description = "SDL3 GPU Computing";

  inputs.nixpkgs.url = "https://channels.nixos.org/nixpkgs-unstable/nixexprs.tar.zst";

  outputs =
    { nixpkgs, ... }:
    let
      pkgs = nixpkgs.legacyPackages.x86_64-linux;
    in
    {
      devShells.x86_64-linux.default = pkgs.mkShell {
        packages = with pkgs; [
          # C++ development
          gcc
          cmake
          ninja
          pkg-config

          # GPU development
          sdl3
          sdl3-shadercross
          vulkan-headers
          vulkan-loader
          vulkan-tools
          vulkan-validation-layers
        ];
      };
    };
}
