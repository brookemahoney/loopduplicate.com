Feature: Status
  To make sure the site's basic basic status is OK
  As an administrator
  I should be able to visit the status report and have no warnings.

  @api
  Scenario: The status report should contain no warnings
    Given I am logged in as a user with the "administrator" role
    And I am on "admin/reports/status"
    Then I should not see an "tr.error" element
