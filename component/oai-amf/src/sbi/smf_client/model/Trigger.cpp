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

#include "Trigger.h"

namespace oai {
namespace smf {
namespace model {

Trigger::Trigger() {
  m_TimeLimit           = 0;
  m_TimeLimitIsSet      = false;
  m_VolumeLimit         = 0;
  m_VolumeLimitIsSet    = false;
  m_VolumeLimit64       = 0L;
  m_VolumeLimit64IsSet  = false;
  m_MaxNumberOfccc      = 0;
  m_MaxNumberOfcccIsSet = false;
}

Trigger::~Trigger() {}

void Trigger::validate() {
  // TODO: implement validation
}

web::json::value Trigger::toJson() const {
  web::json::value val = web::json::value::object();

  val[utility::conversions::to_string_t("triggerType")] =
      ModelBase::toJson(m_TriggerType);
  val[utility::conversions::to_string_t("triggerCategory")] =
      ModelBase::toJson(m_TriggerCategory);
  if (m_TimeLimitIsSet) {
    val[utility::conversions::to_string_t("timeLimit")] =
        ModelBase::toJson(m_TimeLimit);
  }
  if (m_VolumeLimitIsSet) {
    val[utility::conversions::to_string_t("volumeLimit")] =
        ModelBase::toJson(m_VolumeLimit);
  }
  if (m_VolumeLimit64IsSet) {
    val[utility::conversions::to_string_t("volumeLimit64")] =
        ModelBase::toJson(m_VolumeLimit64);
  }
  if (m_MaxNumberOfcccIsSet) {
    val[utility::conversions::to_string_t("maxNumberOfccc")] =
        ModelBase::toJson(m_MaxNumberOfccc);
  }

  return val;
}

void Trigger::fromJson(const web::json::value& val) {
  std::shared_ptr<TriggerType> newTriggerType(new TriggerType());
  newTriggerType->fromJson(
      val.at(utility::conversions::to_string_t("triggerType")));
  setTriggerType(newTriggerType);
  std::shared_ptr<TriggerCategory> newTriggerCategory(new TriggerCategory());
  newTriggerCategory->fromJson(
      val.at(utility::conversions::to_string_t("triggerCategory")));
  setTriggerCategory(newTriggerCategory);
  if (val.has_field(utility::conversions::to_string_t("timeLimit"))) {
    const web::json::value& fieldValue =
        val.at(utility::conversions::to_string_t("timeLimit"));
    if (!fieldValue.is_null()) {
      setTimeLimit(ModelBase::int32_tFromJson(fieldValue));
    }
  }
  if (val.has_field(utility::conversions::to_string_t("volumeLimit"))) {
    const web::json::value& fieldValue =
        val.at(utility::conversions::to_string_t("volumeLimit"));
    if (!fieldValue.is_null()) {
      setVolumeLimit(ModelBase::int32_tFromJson(fieldValue));
    }
  }
  if (val.has_field(utility::conversions::to_string_t("volumeLimit64"))) {
    const web::json::value& fieldValue =
        val.at(utility::conversions::to_string_t("volumeLimit64"));
    if (!fieldValue.is_null()) {
      setVolumeLimit64(ModelBase::int64_tFromJson(fieldValue));
    }
  }
  if (val.has_field(utility::conversions::to_string_t("maxNumberOfccc"))) {
    const web::json::value& fieldValue =
        val.at(utility::conversions::to_string_t("maxNumberOfccc"));
    if (!fieldValue.is_null()) {
      setMaxNumberOfccc(ModelBase::int32_tFromJson(fieldValue));
    }
  }
}

void Trigger::toMultipart(
    std::shared_ptr<MultipartFormData> multipart,
    const utility::string_t& prefix) const {
  utility::string_t namePrefix = prefix;
  if (namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) !=
                                   utility::conversions::to_string_t(".")) {
    namePrefix += utility::conversions::to_string_t(".");
  }

  m_TriggerType->toMultipart(
      multipart, utility::conversions::to_string_t("triggerType."));
  m_TriggerCategory->toMultipart(
      multipart, utility::conversions::to_string_t("triggerCategory."));
  if (m_TimeLimitIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t("timeLimit"),
        m_TimeLimit));
  }
  if (m_VolumeLimitIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t("volumeLimit"),
        m_VolumeLimit));
  }
  if (m_VolumeLimit64IsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t("volumeLimit64"),
        m_VolumeLimit64));
  }
  if (m_MaxNumberOfcccIsSet) {
    multipart->add(ModelBase::toHttpContent(
        namePrefix + utility::conversions::to_string_t("maxNumberOfccc"),
        m_MaxNumberOfccc));
  }
}

void Trigger::fromMultiPart(
    std::shared_ptr<MultipartFormData> multipart,
    const utility::string_t& prefix) {
  utility::string_t namePrefix = prefix;
  if (namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) !=
                                   utility::conversions::to_string_t(".")) {
    namePrefix += utility::conversions::to_string_t(".");
  }

  std::shared_ptr<TriggerType> newTriggerType(new TriggerType());
  newTriggerType->fromMultiPart(
      multipart, utility::conversions::to_string_t("triggerType."));
  setTriggerType(newTriggerType);
  std::shared_ptr<TriggerCategory> newTriggerCategory(new TriggerCategory());
  newTriggerCategory->fromMultiPart(
      multipart, utility::conversions::to_string_t("triggerCategory."));
  setTriggerCategory(newTriggerCategory);
  if (multipart->hasContent(utility::conversions::to_string_t("timeLimit"))) {
    setTimeLimit(ModelBase::int32_tFromHttpContent(
        multipart->getContent(utility::conversions::to_string_t("timeLimit"))));
  }
  if (multipart->hasContent(utility::conversions::to_string_t("volumeLimit"))) {
    setVolumeLimit(ModelBase::int32_tFromHttpContent(multipart->getContent(
        utility::conversions::to_string_t("volumeLimit"))));
  }
  if (multipart->hasContent(
          utility::conversions::to_string_t("volumeLimit64"))) {
    setVolumeLimit64(ModelBase::int64_tFromHttpContent(multipart->getContent(
        utility::conversions::to_string_t("volumeLimit64"))));
  }
  if (multipart->hasContent(
          utility::conversions::to_string_t("maxNumberOfccc"))) {
    setMaxNumberOfccc(ModelBase::int32_tFromHttpContent(multipart->getContent(
        utility::conversions::to_string_t("maxNumberOfccc"))));
  }
}

std::shared_ptr<TriggerType> Trigger::getTriggerType() const {
  return m_TriggerType;
}

void Trigger::setTriggerType(const std::shared_ptr<TriggerType>& value) {
  m_TriggerType = value;
}

std::shared_ptr<TriggerCategory> Trigger::getTriggerCategory() const {
  return m_TriggerCategory;
}

void Trigger::setTriggerCategory(
    const std::shared_ptr<TriggerCategory>& value) {
  m_TriggerCategory = value;
}

int32_t Trigger::getTimeLimit() const {
  return m_TimeLimit;
}

void Trigger::setTimeLimit(int32_t value) {
  m_TimeLimit      = value;
  m_TimeLimitIsSet = true;
}

bool Trigger::timeLimitIsSet() const {
  return m_TimeLimitIsSet;
}

void Trigger::unsetTimeLimit() {
  m_TimeLimitIsSet = false;
}

int32_t Trigger::getVolumeLimit() const {
  return m_VolumeLimit;
}

void Trigger::setVolumeLimit(int32_t value) {
  m_VolumeLimit      = value;
  m_VolumeLimitIsSet = true;
}

bool Trigger::volumeLimitIsSet() const {
  return m_VolumeLimitIsSet;
}

void Trigger::unsetVolumeLimit() {
  m_VolumeLimitIsSet = false;
}

int64_t Trigger::getVolumeLimit64() const {
  return m_VolumeLimit64;
}

void Trigger::setVolumeLimit64(int64_t value) {
  m_VolumeLimit64      = value;
  m_VolumeLimit64IsSet = true;
}

bool Trigger::volumeLimit64IsSet() const {
  return m_VolumeLimit64IsSet;
}

void Trigger::unsetVolumeLimit64() {
  m_VolumeLimit64IsSet = false;
}

int32_t Trigger::getMaxNumberOfccc() const {
  return m_MaxNumberOfccc;
}

void Trigger::setMaxNumberOfccc(int32_t value) {
  m_MaxNumberOfccc      = value;
  m_MaxNumberOfcccIsSet = true;
}

bool Trigger::maxNumberOfcccIsSet() const {
  return m_MaxNumberOfcccIsSet;
}

void Trigger::unsetMaxNumberOfccc() {
  m_MaxNumberOfcccIsSet = false;
}

}  // namespace model
}  // namespace smf
}  // namespace oai
