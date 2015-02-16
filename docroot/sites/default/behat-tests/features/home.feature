Feature: Home
  To make sure the site's basic functionality is working
  As any user
  I should be able to browse around and see particular text

  Background:
    Given I am on the homepage

  @javascript
  Scenario: Some common links and text should exist
    Then I should see the link "LoopDuplicate"
    And I should see the link "Fork Me"
    And I should see text matching "Show/Hide Filters"
    And I click "last »"
    Then I should see the link "« first"
    And I click "PHP Date and Time"
    Then I should see text matching "PHP Date and Time"
    And I click "General"
    Then I should see the link "(-) "
