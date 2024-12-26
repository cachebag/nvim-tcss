// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterTcss",
    products: [
        .library(name: "TreeSitterTcss", targets: ["TreeSitterTcss"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterTcss",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterTcssTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterTcss",
            ],
            path: "bindings/swift/TreeSitterTcssTests"
        )
    ],
    cLanguageStandard: .c11
)
