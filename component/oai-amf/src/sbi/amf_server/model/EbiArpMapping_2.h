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
/*
 * EbiArpMapping_2.h
 *
 *
 */

#ifndef EbiArpMapping_2_H_
#define EbiArpMapping_2_H_

#include "Arp.h"
#include <nlohmann/json.hpp>

namespace oai {
namespace amf {
namespace model {

/// <summary>
///
/// </summary>
class EbiArpMapping_2 {
 public:
  EbiArpMapping_2();
  virtual ~EbiArpMapping_2();

  void validate();

  /////////////////////////////////////////////
  /// EbiArpMapping_2 members

  /// <summary>
  ///
  /// </summary>
  int32_t getEpsBearerId() const;
  void setEpsBearerId(int32_t const value);
  /// <summary>
  ///
  /// </summary>
  Arp getArp() const;
  void setArp(Arp const& value);

  friend void to_json(nlohmann::json& j, const EbiArpMapping_2& o);
  friend void from_json(const nlohmann::json& j, EbiArpMapping_2& o);

 protected:
  int32_t m_EpsBearerId;

  Arp m_Arp;
};

}  // namespace model
}  // namespace amf
}  // namespace oai

#endif /* EbiArpMapping_2_H_ */
