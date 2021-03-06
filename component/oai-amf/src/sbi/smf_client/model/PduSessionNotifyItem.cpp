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

#include "PduSessionNotifyItem.h"

namespace oai {
namespace smf {
namespace model {

PduSessionNotifyItem::PduSessionNotifyItem() {}

PduSessionNotifyItem::~PduSessionNotifyItem() {}

void PduSessionNotifyItem::validate() {
  // TODO: implement validation
}

web::json::value PduSessionNotifyItem::toJson() const {
  web::json::value val = web::json::value::object();

  val[utility::conversions::to_string_t("notificationCause")] =
      ModelBase::toJson(m_NotificationCause);

  return val;
}

void PduSessionNotifyItem::fromJson(const web::json::value& val) {
  std::shared_ptr<NotificationCause> newNotificationCause(
      new NotificationCause());
  newNotificationCause->fromJson(
      val.at(utility::conversions::to_string_t("notificationCause")));
  setNotificationCause(newNotificationCause);
}

void PduSessionNotifyItem::toMultipart(
    std::shared_ptr<MultipartFormData> multipart,
    const utility::string_t& prefix) const {
  utility::string_t namePrefix = prefix;
  if (namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) !=
                                   utility::conversions::to_string_t(".")) {
    namePrefix += utility::conversions::to_string_t(".");
  }

  m_NotificationCause->toMultipart(
      multipart, utility::conversions::to_string_t("notificationCause."));
}

void PduSessionNotifyItem::fromMultiPart(
    std::shared_ptr<MultipartFormData> multipart,
    const utility::string_t& prefix) {
  utility::string_t namePrefix = prefix;
  if (namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) !=
                                   utility::conversions::to_string_t(".")) {
    namePrefix += utility::conversions::to_string_t(".");
  }

  std::shared_ptr<NotificationCause> newNotificationCause(
      new NotificationCause());
  newNotificationCause->fromMultiPart(
      multipart, utility::conversions::to_string_t("notificationCause."));
  setNotificationCause(newNotificationCause);
}

std::shared_ptr<NotificationCause> PduSessionNotifyItem::getNotificationCause()
    const {
  return m_NotificationCause;
}

void PduSessionNotifyItem::setNotificationCause(
    const std::shared_ptr<NotificationCause>& value) {
  m_NotificationCause = value;
}

}  // namespace model
}  // namespace smf
}  // namespace oai
