Feature: Basic Browsing
  To make sure the site's basic functionality is working
  As any user
  I should be able to browse around and see particular text

  Background:
    Given I am on the homepage

  Scenario: Some common links and text should exist
    Then I should see the link "LoopDuplicate"
    And I should see the link "Fork Me"
    Then I click "last »"
    And I should see the link "« first"
    Then I click "PHP Date and Time"
    And I should see text matching "PHP Date and Time"
    Then I click "General"
    And I should see the link "(-) "

  @javascript
  Scenario: Javascript should add particular elements to the DOM
    Then I should see text matching "Show/Hide Filters"
