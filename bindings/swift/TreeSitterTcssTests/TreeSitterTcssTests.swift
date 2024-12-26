import XCTest
import SwiftTreeSitter
import TreeSitterTcss

final class TreeSitterTcssTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_tcss())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Tcss grammar")
    }
}
