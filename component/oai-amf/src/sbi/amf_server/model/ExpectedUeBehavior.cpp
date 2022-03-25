/**
 * Namf_Communication
 * AMF Communication Service © 2019, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0.alpha-1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "ExpectedUeBehavior.h"

namespace oai {
namespace amf {
namespace model {

ExpectedUeBehavior::ExpectedUeBehavior() {
  m_ValidityTime = "";
}

ExpectedUeBehavior::~ExpectedUeBehavior() {}

void ExpectedUeBehavior::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json& j, const ExpectedUeBehavior& o) {
  j                      = nlohmann::json();
  j["expMoveTrajectory"] = o.m_ExpMoveTrajectory;
  j["validityTime"]      = o.m_ValidityTime;
}

void from_json(const nlohmann::json& j, ExpectedUeBehavior& o) {
  j.at("expMoveTrajectory").get_to(o.m_ExpMoveTrajectory);
  j.at("validityTime").get_to(o.m_ValidityTime);
}

std::vector<UserLocation>& ExpectedUeBehavior::getExpMoveTrajectory() {
  return m_ExpMoveTrajectory;
}
std::string ExpectedUeBehavior::getValidityTime() const {
  return m_ValidityTime;
}
void ExpectedUeBehavior::setValidityTime(std::string const& value) {
  m_ValidityTime = value;
}

}  // namespace model
}  // namespace amf
}  // namespace oai
