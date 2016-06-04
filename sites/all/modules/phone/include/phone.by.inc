<?php

/**
 * @file
 * CCK Field for Belarusian phone numbers.
 */
 
define('PHONE_BY_REGEX', "/^(\+375|0|80)\d{9}$/i");

function phone_by_metadata() {
  // These strings are translated using t() on output.
  return array(
    'error' => '"%value" is not a valid Belarusian phone number<br>Belarusian phone numbers should only ...',
  );
}

/**
 * Verifies that $phonenumber is valid
 *
 * @param string $phonenumber
 * @return boolean Returns boolean FALSE if the phone number is not valid.
 */
function valid_by_phone_number($phonenumber) {
  // define regular expression
  //$regex = "/^(\+375|0)[1-9]\d{7,8}$/i";


  $phonenumber  = str_replace(array(' ','-','(',')'), '', $phonenumber);
  // return true if valid, false otherwise
  return (bool) preg_match(PHONE_BY_REGEX, $phonenumber);
}

/**
 * Formatting for Belarusian Phone Numbers.
 *
 * @param string $phonenumber
 * @return string Returns a string containting the phone number with some formatting.
 */
function format_by_phone_number($phonenumber, $field) {

  $phonenumber = trim($phonenumber);
  $phonenumber  = str_replace(array(' ','-','(',')'), '', $phonenumber);
  preg_match(PHONE_BY_REGEX, $phonenumber, $matches);

   if ($field['phone_country_code']) {
      if ($matches[1] != "+375") {
	  if ($matches[1] == "0") $phonenumber = substr($phonenumber, 1);
	  if ($matches[1] == "80") $phonenumber = substr($phonenumber, 2);
  	$phonenumber = "+375" . $phonenumber;
      }
   }
   
   return $phonenumber;
}
