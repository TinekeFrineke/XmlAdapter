from conan import ConanFile
from conan.tools.cmake import cmake_layout


class XmlAdapterTestRecipe(ConanFile):
    settings = "os", "compiler", "build_type", "arch"
    generators = "CMakeDeps", "CMakeToolchain"

    def requirements(self):
        self.requires("gtest/1.16.0")

    # def layout(self):
    #     cmake_layout(self)

    def layout(self):
        self.folders.build = ""
        self.folders.generators = "generators"