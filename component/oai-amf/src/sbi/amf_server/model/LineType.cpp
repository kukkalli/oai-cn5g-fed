/**
 * Namf_EventExposure
 * AMF Event Exposure Service © 2019, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0.alpha-1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "LineType.h"
#include "Helpers.h"

#include <sstream>

namespace oai::amf::model {

LineType::LineType() {}

void LineType::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::amf::helpers::ValidationException(msg.str());
  }
}

bool LineType::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool LineType::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success                  = true;
  const std::string _pathPrefix = pathPrefix.empty() ? "LineType" : pathPrefix;

  return success;
}

bool LineType::operator==(const LineType& rhs) const {
  return true;  // TODO

  ;
}

bool LineType::operator!=(const LineType& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const LineType& o) {
  j = nlohmann::json();
}

void from_json(const nlohmann::json& j, LineType& o) {}

}  // namespace oai::amf::model
