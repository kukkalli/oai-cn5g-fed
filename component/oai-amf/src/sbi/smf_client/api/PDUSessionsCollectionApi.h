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
 * PDUSessionsCollectionApi.h
 *
 *
 */

#ifndef OAI_SMF_API_PDUSessionsCollectionApi_H_
#define OAI_SMF_API_PDUSessionsCollectionApi_H_

#include "../ApiClient.h"

#include "PduSessionCreateData.h"
#include "PduSessionCreateError.h"
#include "PduSessionCreatedData.h"
#include "ProblemDetails.h"

#include <boost/optional.hpp>

namespace oai {
namespace smf {
namespace api {

using namespace oai::smf::model;

class PDUSessionsCollectionApi {
 public:
  explicit PDUSessionsCollectionApi(std::shared_ptr<ApiClient> apiClient);

  virtual ~PDUSessionsCollectionApi();

  /// <summary>
  /// Create
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="pduSessionCreateData">representation of the PDU session to be
  /// created in the H-SMF</param>
  pplx::task<std::shared_ptr<PduSessionCreatedData>> postPduSessions(
      std::shared_ptr<PduSessionCreateData> pduSessionCreateData);

 protected:
  std::shared_ptr<ApiClient> m_ApiClient;
};

}  // namespace api
}  // namespace smf
}  // namespace oai

#endif /* OAI_SMF_API_PDUSessionsCollectionApi_H_ */
