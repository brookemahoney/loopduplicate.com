Feature: Adminstrator
  To make sure the back end user experience is OK
  As an administrator
  I should be able to use various features.

  Background:
    Given I am logged in as a user with the "administrator" role

  @api @javascript
  Scenario: Various features are working
    When I am on "admin/reports/status"
    Then I should not see an "tr.error" element
    When I am on "admin/reports/updates/update"
    Then I should see "All of your projects are up to date."
    When I am on "node/add"
    Then I should see the link "Enable rich-text"
