/* Generated SBE (Simple Binary Encoding) message codec */
#ifndef _DARKFEED_SCHEMAS_SBE_HALT_H_
#define _DARKFEED_SCHEMAS_SBE_HALT_H_

#if defined(SBE_HAVE_CMATH)
/* cmath needed for std::numeric_limits<double>::quiet_NaN() */
#  include <cmath>
#  define SBE_FLOAT_NAN std::numeric_limits<float>::quiet_NaN()
#  define SBE_DOUBLE_NAN std::numeric_limits<double>::quiet_NaN()
#else
/* math.h needed for NAN */
#  include <math.h>
#  define SBE_FLOAT_NAN NAN
#  define SBE_DOUBLE_NAN NAN
#endif

#if __cplusplus >= 201103L
#  include <cstdint>
#  include <string>
#  include <cstring>
#endif

#if __cplusplus >= 201103L
#  define SBE_CONSTEXPR constexpr
#else
#  define SBE_CONSTEXPR
#endif

#include <sbe/sbe.h>

#include "MessageHeader.h"
#include "Bool.h"
#include "MIC.h"
#include "Symbol.h"
#include "MIC.h"
#include "IssueType.h"
#include "HaltStatus.h"
#include "Timestamp.h"
#include "TradeCondition.h"
#include "QuoteCondition.h"
#include "Price.h"
#include "Currency.h"
#include "HaltType.h"
#include "OptionType.h"

using namespace sbe;

namespace darkfeed
{
namespace schemas
{
namespace sbe
{

class Halt {
 private:
    char *m_buffer;
    std::uint64_t m_bufferLength;
    std::uint64_t *m_positionPtr;
    std::uint64_t m_offset;
    std::uint64_t m_position;
    std::uint64_t m_actingBlockLength;
    std::uint64_t m_actingVersion;

    inline void reset(
        char *buffer, const std::uint64_t offset, const std::uint64_t bufferLength,
        const std::uint64_t actingBlockLength, const std::uint64_t actingVersion)
    {
        m_buffer = buffer;
        m_offset = offset;
        m_bufferLength = bufferLength;
        m_actingBlockLength = actingBlockLength;
        m_actingVersion = actingVersion;
        m_positionPtr = &m_position;
        position(offset + m_actingBlockLength);
    }

 public:

    Halt() : m_buffer(nullptr), m_bufferLength(0), m_offset(0)
    {}

    Halt(char *buffer, const std::uint64_t bufferLength)
    {
        reset(buffer, 0, bufferLength, sbeBlockLength(), sbeSchemaVersion());
    }

    Halt(char *buffer, const std::uint64_t bufferLength, const std::uint64_t actingBlockLength, const std::uint64_t actingVersion)
    {
        reset(buffer, 0, bufferLength, actingBlockLength, actingVersion);
    }

    static SBE_CONSTEXPR std::uint16_t sbeBlockLength()
    {
        return (std::uint16_t) 36;
    }

    static SBE_CONSTEXPR std::uint16_t sbeTemplateId()
    {
        return (std::uint16_t) 3;
    }

    static SBE_CONSTEXPR std::uint16_t sbeSchemaId()
    {
        return (std::uint16_t) 3116;
    }

    static SBE_CONSTEXPR std::uint16_t sbeSchemaVersion()
    {
        return (std::uint16_t) 0;
    }

    static SBE_CONSTEXPR const char *sbeSemanticType()
    {
        return "";
    }

    std::uint64_t offset() const
    {
        return m_offset;
    }

    Halt &wrapForEncode(char *buffer, const std::uint64_t offset, const std::uint64_t bufferLength)
    {
        reset(buffer, offset, bufferLength, sbeBlockLength(), sbeSchemaVersion());
        return *this;
    }

    Halt &wrapForDecode(
        char *buffer, const std::uint64_t offset, const std::uint64_t actingBlockLength,
        const std::uint64_t actingVersion, const std::uint64_t bufferLength)
    {
        reset(buffer, offset, bufferLength, actingBlockLength, actingVersion);
        return *this;
    }

    std::uint64_t position() const
    {
        return m_position;
    }

    void position(const std::uint64_t position)
    {
        if (SBE_BOUNDS_CHECK_EXPECT((position > m_bufferLength), false))
        {
            throw std::runtime_error("buffer too short [E100]");
        }
        m_position = position;
    }

    std::uint64_t encodedLength() const
    {
        return position() - m_offset;
    }

    char *buffer()
    {
        return m_buffer;
    }

    std::uint64_t actingVersion() const
    {
        return m_actingVersion;
    }

    static SBE_CONSTEXPR std::uint16_t symbolId()
    {
        return 1;
    }

    static SBE_CONSTEXPR std::uint64_t symbolSinceVersion()
    {
        return 0;
    }

    bool symbolInActingVersion()
    {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wtautological-compare"
        return m_actingVersion >= symbolSinceVersion();
#pragma clang diagnostic pop
    }

    static SBE_CONSTEXPR std::size_t symbolEncodingOffset()
    {
        return 0;
    }


    static const char *symbolMetaAttribute(const MetaAttribute::Attribute metaAttribute)
    {
        switch (metaAttribute)
        {
        case MetaAttribute::EPOCH: return "unix";
        case MetaAttribute::TIME_UNIT: return "nanosecond";
        case MetaAttribute::SEMANTIC_TYPE: return "";
        }

        return "";
    }

 private:
    Symbol m_symbol;

 public:

    Symbol &symbol()
    {
        m_symbol.wrap(m_buffer, m_offset + 0, m_actingVersion, m_bufferLength);
        return m_symbol;
    }

    static SBE_CONSTEXPR std::uint16_t seq_numId()
    {
        return 2;
    }

    static SBE_CONSTEXPR std::uint64_t seq_numSinceVersion()
    {
        return 0;
    }

    bool seq_numInActingVersion()
    {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wtautological-compare"
        return m_actingVersion >= seq_numSinceVersion();
#pragma clang diagnostic pop
    }

    static SBE_CONSTEXPR std::size_t seq_numEncodingOffset()
    {
        return 11;
    }


    static const char *seq_numMetaAttribute(const MetaAttribute::Attribute metaAttribute)
    {
        switch (metaAttribute)
        {
        case MetaAttribute::EPOCH: return "unix";
        case MetaAttribute::TIME_UNIT: return "nanosecond";
        case MetaAttribute::SEMANTIC_TYPE: return "";
        }

        return "";
    }

    static SBE_CONSTEXPR std::uint64_t seq_numNullValue()
    {
        return SBE_NULLVALUE_UINT64;
    }

    static SBE_CONSTEXPR std::uint64_t seq_numMinValue()
    {
        return 0x0L;
    }

    static SBE_CONSTEXPR std::uint64_t seq_numMaxValue()
    {
        return 0xfffffffffffffffeL;
    }

    static SBE_CONSTEXPR std::size_t seq_numEncodingLength()
    {
        return 8;
    }

    std::uint64_t seq_num() const
    {
        return SBE_LITTLE_ENDIAN_ENCODE_64(*((std::uint64_t *) (m_buffer + m_offset + 11)));
    }

    Halt &seq_num(const std::uint64_t value)
    {
        *((std::uint64_t *) (m_buffer + m_offset + 11)) = SBE_LITTLE_ENDIAN_ENCODE_64(value);
        return *this;
    }

    static SBE_CONSTEXPR std::uint16_t reporting_exgId()
    {
        return 3;
    }

    static SBE_CONSTEXPR std::uint64_t reporting_exgSinceVersion()
    {
        return 0;
    }

    bool reporting_exgInActingVersion()
    {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wtautological-compare"
        return m_actingVersion >= reporting_exgSinceVersion();
#pragma clang diagnostic pop
    }

    static SBE_CONSTEXPR std::size_t reporting_exgEncodingOffset()
    {
        return 19;
    }


    static const char *reporting_exgMetaAttribute(const MetaAttribute::Attribute metaAttribute)
    {
        switch (metaAttribute)
        {
        case MetaAttribute::EPOCH: return "unix";
        case MetaAttribute::TIME_UNIT: return "nanosecond";
        case MetaAttribute::SEMANTIC_TYPE: return "";
        }

        return "";
    }

    MIC::Value reporting_exg() const
    {
        return MIC::get((*((std::uint8_t *) (m_buffer + m_offset + 19))));
    }

    Halt &reporting_exg(const MIC::Value value)
    {
        *((std::uint8_t *) (m_buffer + m_offset + 19)) = (value);
        return *this;
    }
    static SBE_CONSTEXPR std::size_t reporting_exgEncodingLength()
    {
        return 1;
    }

    static SBE_CONSTEXPR std::uint16_t tsId()
    {
        return 4;
    }

    static SBE_CONSTEXPR std::uint64_t tsSinceVersion()
    {
        return 0;
    }

    bool tsInActingVersion()
    {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wtautological-compare"
        return m_actingVersion >= tsSinceVersion();
#pragma clang diagnostic pop
    }

    static SBE_CONSTEXPR std::size_t tsEncodingOffset()
    {
        return 20;
    }


    static const char *tsMetaAttribute(const MetaAttribute::Attribute metaAttribute)
    {
        switch (metaAttribute)
        {
        case MetaAttribute::EPOCH: return "unix";
        case MetaAttribute::TIME_UNIT: return "nanosecond";
        case MetaAttribute::SEMANTIC_TYPE: return "";
        }

        return "";
    }

 private:
    Timestamp m_ts;

 public:

    Timestamp &ts()
    {
        m_ts.wrap(m_buffer, m_offset + 20, m_actingVersion, m_bufferLength);
        return m_ts;
    }

    static SBE_CONSTEXPR std::uint16_t halt_typeId()
    {
        return 5;
    }

    static SBE_CONSTEXPR std::uint64_t halt_typeSinceVersion()
    {
        return 0;
    }

    bool halt_typeInActingVersion()
    {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wtautological-compare"
        return m_actingVersion >= halt_typeSinceVersion();
#pragma clang diagnostic pop
    }

    static SBE_CONSTEXPR std::size_t halt_typeEncodingOffset()
    {
        return 34;
    }


    static const char *halt_typeMetaAttribute(const MetaAttribute::Attribute metaAttribute)
    {
        switch (metaAttribute)
        {
        case MetaAttribute::EPOCH: return "unix";
        case MetaAttribute::TIME_UNIT: return "nanosecond";
        case MetaAttribute::SEMANTIC_TYPE: return "";
        }

        return "";
    }

    HaltType::Value halt_type() const
    {
        return HaltType::get((*((std::uint8_t *) (m_buffer + m_offset + 34))));
    }

    Halt &halt_type(const HaltType::Value value)
    {
        *((std::uint8_t *) (m_buffer + m_offset + 34)) = (value);
        return *this;
    }
    static SBE_CONSTEXPR std::size_t halt_typeEncodingLength()
    {
        return 1;
    }

    static SBE_CONSTEXPR std::uint16_t halt_statusId()
    {
        return 6;
    }

    static SBE_CONSTEXPR std::uint64_t halt_statusSinceVersion()
    {
        return 0;
    }

    bool halt_statusInActingVersion()
    {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wtautological-compare"
        return m_actingVersion >= halt_statusSinceVersion();
#pragma clang diagnostic pop
    }

    static SBE_CONSTEXPR std::size_t halt_statusEncodingOffset()
    {
        return 35;
    }


    static const char *halt_statusMetaAttribute(const MetaAttribute::Attribute metaAttribute)
    {
        switch (metaAttribute)
        {
        case MetaAttribute::EPOCH: return "unix";
        case MetaAttribute::TIME_UNIT: return "nanosecond";
        case MetaAttribute::SEMANTIC_TYPE: return "";
        }

        return "";
    }

    HaltStatus::Value halt_status() const
    {
        return HaltStatus::get((*((std::uint8_t *) (m_buffer + m_offset + 35))));
    }

    Halt &halt_status(const HaltStatus::Value value)
    {
        *((std::uint8_t *) (m_buffer + m_offset + 35)) = (value);
        return *this;
    }
    static SBE_CONSTEXPR std::size_t halt_statusEncodingLength()
    {
        return 1;
    }
};
}
}
}
#endif
