#pragma once

#include "stdafx.h"

namespace KeyLoggerPro {

  class BasicDateTime {

    private:
      time_t m_DeltaT;
      short m_Day;
      short m_Month;
      short m_Year;
      short m_Hour;
      short m_Minute;
      short m_Second;

    public:
      BasicDateTime(void);
      BasicDateTime(const short&, const short&, const short&);
      BasicDateTime(const short&, const short&, const short&, const short&, const short&, const short&);

      short getDay(void) const;
      short getMonth(void) const;
      short getYear(void) const;
      short getHour(void) const;
      short getMinute(void) const;
      short getSecond(void) const;
      void setDay(const short&);
      void setMonth(const short&);
      void setYear(const short&);
      void setHour(const short&);
      void setMinute(const short&);
      void setSecond(const short&);
  };

}
