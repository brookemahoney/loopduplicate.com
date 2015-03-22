<?php

/**
 * POC for using PHPUnit with TravisCI.
 */
class POCTest extends PHPUnit_Framework_TestCase {
  // Verifies that Drupal's check_plain() is working.
  public function testCheckPlain() {
    $this->assertEquals(check_plain("<script>alert('xss')</script>>"), "&lt;script&gt;alert(&#039;xss&#039;)&lt;/script&gt;&gt;");
  }
}
