/**
 * Nsmf_PDUSession
 * SMF PDU Session Service. © 2019, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0.alpha-1
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.1.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * GbrQosFlowInformation.h
 *
 *
 */

#ifndef OAI_SMF_MODEL_GbrQosFlowInformation_H_
#define OAI_SMF_MODEL_GbrQosFlowInformation_H_

#include "../ModelBase.h"

#include "NotificationControl.h"
#include <cpprest/details/basic_types.h>

namespace oai {
namespace smf {
namespace model {

/// <summary>
///
/// </summary>
class GbrQosFlowInformation : public ModelBase {
 public:
  GbrQosFlowInformation();
  virtual ~GbrQosFlowInformation();

  /////////////////////////////////////////////
  /// ModelBase overrides

  void validate() override;

  web::json::value toJson() const override;
  void fromJson(const web::json::value& json) override;

  void toMultipart(
      std::shared_ptr<MultipartFormData> multipart,
      const utility::string_t& namePrefix) const override;
  void fromMultiPart(
      std::shared_ptr<MultipartFormData> multipart,
      const utility::string_t& namePrefix) override;

  /////////////////////////////////////////////
  /// GbrQosFlowInformation members

  /// <summary>
  ///
  /// </summary>
  utility::string_t getMaxFbrDl() const;

  void setMaxFbrDl(const utility::string_t& value);

  /// <summary>
  ///
  /// </summary>
  utility::string_t getMaxFbrUl() const;

  void setMaxFbrUl(const utility::string_t& value);

  /// <summary>
  ///
  /// </summary>
  utility::string_t getGuaFbrDl() const;

  void setGuaFbrDl(const utility::string_t& value);

  /// <summary>
  ///
  /// </summary>
  utility::string_t getGuaFbrUl() const;

  void setGuaFbrUl(const utility::string_t& value);

  /// <summary>
  ///
  /// </summary>
  std::shared_ptr<NotificationControl> getNotifControl() const;
  bool notifControlIsSet() const;
  void unsetNotifControl();

  void setNotifControl(const std::shared_ptr<NotificationControl>& value);

  /// <summary>
  ///
  /// </summary>
  int32_t getMaxPacketLossRateDl() const;
  bool maxPacketLossRateDlIsSet() const;
  void unsetMaxPacketLossRateDl();

  void setMaxPacketLossRateDl(int32_t value);

  /// <summary>
  ///
  /// </summary>
  int32_t getMaxPacketLossRateUl() const;
  bool maxPacketLossRateUlIsSet() const;
  void unsetMaxPacketLossRateUl();

  void setMaxPacketLossRateUl(int32_t value);

 protected:
  utility::string_t m_MaxFbrDl;
  utility::string_t m_MaxFbrUl;
  utility::string_t m_GuaFbrDl;
  utility::string_t m_GuaFbrUl;
  std::shared_ptr<NotificationControl> m_NotifControl;
  bool m_NotifControlIsSet;
  int32_t m_MaxPacketLossRateDl;
  bool m_MaxPacketLossRateDlIsSet;
  int32_t m_MaxPacketLossRateUl;
  bool m_MaxPacketLossRateUlIsSet;
};

}  // namespace model
}  // namespace smf
}  // namespace oai

#endif /* OAI_SMF_MODEL_GbrQosFlowInformation_H_ */
