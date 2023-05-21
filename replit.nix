{ pkgs }: {
	deps = [
    #pkgs.clang++_7
    pkgs.zsh
                        pkgs.systemdMinimal
                        pkgs.clang_12
		pkgs.ccls
		pkgs.gdb
		pkgs.gnumake
	];
}