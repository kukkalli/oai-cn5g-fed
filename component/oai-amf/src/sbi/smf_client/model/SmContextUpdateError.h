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
 * SmContextUpdateError.h
 *
 *
 */

#ifndef OAI_SMF_MODEL_SmContextUpdateError_H_
#define OAI_SMF_MODEL_SmContextUpdateError_H_

#include "../ModelBase.h"

#include "ProblemDetails_2.h"
#include "RefToBinaryData.h"
#include "UpCnxState.h"
#include <cpprest/details/basic_types.h>
#include "N2SmInfoType.h"

namespace oai {
namespace smf {
namespace model {

/// <summary>
///
/// </summary>
class SmContextUpdateError : public ModelBase {
 public:
  SmContextUpdateError();
  virtual ~SmContextUpdateError();

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
  /// SmContextUpdateError members

  /// <summary>
  ///
  /// </summary>
  std::shared_ptr<ProblemDetails_2> getError() const;

  void setError(const std::shared_ptr<ProblemDetails_2>& value);

  /// <summary>
  ///
  /// </summary>
  std::shared_ptr<RefToBinaryData> getN1SmMsg() const;
  bool n1SmMsgIsSet() const;
  void unsetN1SmMsg();

  void setN1SmMsg(const std::shared_ptr<RefToBinaryData>& value);

  /// <summary>
  ///
  /// </summary>
  std::shared_ptr<RefToBinaryData> getN2SmInfo() const;
  bool n2SmInfoIsSet() const;
  void unsetN2SmInfo();

  void setN2SmInfo(const std::shared_ptr<RefToBinaryData>& value);

  /// <summary>
  ///
  /// </summary>
  std::shared_ptr<N2SmInfoType> getN2SmInfoType() const;
  bool n2SmInfoTypeIsSet() const;
  void unsetN2SmInfoType();

  void setN2SmInfoType(const std::shared_ptr<N2SmInfoType>& value);

  /// <summary>
  ///
  /// </summary>
  std::shared_ptr<UpCnxState> getUpCnxState() const;
  bool upCnxStateIsSet() const;
  void unsetUpCnxState();

  void setUpCnxState(const std::shared_ptr<UpCnxState>& value);

  /// <summary>
  ///
  /// </summary>
  utility::datetime getRecoveryTime() const;
  bool recoveryTimeIsSet() const;
  void unsetRecoveryTime();

  void setRecoveryTime(const utility::datetime& value);

 protected:
  std::shared_ptr<ProblemDetails_2> m_Error;
  std::shared_ptr<RefToBinaryData> m_N1SmMsg;
  bool m_N1SmMsgIsSet;
  std::shared_ptr<RefToBinaryData> m_N2SmInfo;
  bool m_N2SmInfoIsSet;
  std::shared_ptr<N2SmInfoType> m_N2SmInfoType;
  bool m_N2SmInfoTypeIsSet;
  std::shared_ptr<UpCnxState> m_UpCnxState;
  bool m_UpCnxStateIsSet;
  utility::datetime m_RecoveryTime;
  bool m_RecoveryTimeIsSet;
};

}  // namespace model
}  // namespace smf
}  // namespace oai

#endif /* OAI_SMF_MODEL_SmContextUpdateError_H_ */
