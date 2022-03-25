/*
 * Licensed to the OpenAirInterface (OAI) Software Alliance under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The OpenAirInterface Software Alliance licenses this file to You under
 * the OAI Public License, Version 1.1  (the "License"); you may not use this
 * file except in compliance with the License. You may obtain a copy of the
 * License at
 *
 *      http://www.openairinterface.org/?page_id=698
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *-------------------------------------------------------------------------------
 * For more information about the OpenAirInterface (OAI) Software Alliance:
 *      contact@openairinterface.org
 */
/**
 * Nudr_DataRepository API OpenAPI file
 * Unified Data Repository Service. © 2020, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 2.1.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * GeographicArea.h
 *
 *
 */

#ifndef GeographicArea_H_
#define GeographicArea_H_

#include <nlohmann/json.hpp>
#include <vector>

#include "EllipsoidArc.h"
#include "GeographicalCoordinates.h"
#include "Point.h"
#include "PointAltitude.h"
#include "PointAltitudeUncertainty.h"
#include "PointUncertaintyCircle.h"
#include "PointUncertaintyEllipse.h"
#include "Polygon.h"
#include "SupportedGADShapes.h"
#include "UncertaintyEllipse.h"

namespace oai::udr::model {

/// <summary>
///
/// </summary>
class GeographicArea {
public:
  GeographicArea();
  virtual ~GeographicArea();

  void validate();

  /////////////////////////////////////////////
  /// GeographicArea members

  /// <summary>
  ///
  /// </summary>
  SupportedGADShapes getShape() const;
  void setShape(SupportedGADShapes const &value);
  /// <summary>
  ///
  /// </summary>
  GeographicalCoordinates getPoint() const;
  void setPoint(GeographicalCoordinates const &value);
  /// <summary>
  ///
  /// </summary>
  float getUncertainty() const;
  void setUncertainty(float const value);
  /// <summary>
  ///
  /// </summary>
  UncertaintyEllipse getUncertaintyEllipse() const;
  void setUncertaintyEllipse(UncertaintyEllipse const &value);
  /// <summary>
  ///
  /// </summary>
  int32_t getConfidence() const;
  void setConfidence(int32_t const value);
  /// <summary>
  ///
  /// </summary>
  std::vector<GeographicalCoordinates> &getPointList();
  void setPointList(std::vector<GeographicalCoordinates> const &value);
  /// <summary>
  ///
  /// </summary>
  double getAltitude() const;
  void setAltitude(double const value);
  /// <summary>
  ///
  /// </summary>
  float getUncertaintyAltitude() const;
  void setUncertaintyAltitude(float const value);
  /// <summary>
  ///
  /// </summary>
  int32_t getInnerRadius() const;
  void setInnerRadius(int32_t const value);
  /// <summary>
  ///
  /// </summary>
  float getUncertaintyRadius() const;
  void setUncertaintyRadius(float const value);
  /// <summary>
  ///
  /// </summary>
  int32_t getOffsetAngle() const;
  void setOffsetAngle(int32_t const value);
  /// <summary>
  ///
  /// </summary>
  int32_t getIncludedAngle() const;
  void setIncludedAngle(int32_t const value);

  friend void to_json(nlohmann::json &j, const GeographicArea &o);
  friend void from_json(const nlohmann::json &j, GeographicArea &o);

protected:
  SupportedGADShapes m_Shape;

  GeographicalCoordinates m_Point;

  float m_Uncertainty;

  UncertaintyEllipse m_UncertaintyEllipse;

  int32_t m_Confidence;

  std::vector<GeographicalCoordinates> m_PointList;

  double m_Altitude;

  float m_UncertaintyAltitude;

  int32_t m_InnerRadius;

  float m_UncertaintyRadius;

  int32_t m_OffsetAngle;

  int32_t m_IncludedAngle;
};

} // namespace oai::udr::model

#endif /* GeographicArea_H_ */
