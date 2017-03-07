// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_TRADECONDITIONS_DARKFEED_SCHEMAS_FB_H_
#define FLATBUFFERS_GENERATED_TRADECONDITIONS_DARKFEED_SCHEMAS_FB_H_

#include "flatbuffers/flatbuffers.h"

namespace darkfeed {
namespace schemas {
namespace fb
{

enum class TradeCondition : uint8_t {
    none = 0,
    regular = 1,
    cash = 2,
    avg_price = 3,
    cash_trade = 4,
    next_day_market = 5,
    opening_detail = 6,
    intraday_detail = 7,
    rule_127 = 8,
    rule_155 = 9,
    sold_last = 10,
    next_day = 11,
    opened = 12,
    seller = 13,
    sold = 14,
    stopped_stock = 15,
    imbalance_more_buyers = 16,
    imbalance_more_sellers = 17,
    opening_price = 18,
    manual = 19,
    iso = 20,
    bargain_condition = 21,
    converted_price_indicator = 22,
    exchange_last = 23,
    final_price = 24,
    ex_pit = 25,
    crossed = 26,
    cancel = 27,
    volume_only = 28,
    direct_plus = 29,
    acquisition = 30,
    bunched = 31,
    distribution = 32,
    bunched_sale = 33,
    split = 34,
    cancel_stopped = 35,
    cancel_eth = 36,
    cancel_stopped_eth = 37,
    out_of_seq_eth = 38,
    cancel_last_eth = 39,
    sold_last_eth = 40,
    cancel_last = 41,
    sold_last_sale = 42,
    cancel_open = 43,
    cancel_open_eth = 44,
    opened_sale_eth = 45,
    cancel_only = 46,
    cancel_only_eth = 47,
    late_open_eth = 48,
    auto_exec_eth = 49,
    reopen = 50,
    reopen_eth = 51,
    adjusted = 52,
    adjusted_eth = 53,
    spread = 54,
    spread_eth = 55,
    straddle = 56,
    straddle_eth = 57,
    stopped = 58,
    stopped_eth = 59,
    regular_eth = 60,
    combo = 61,
    combo_eth = 62,
    closing = 63,
    prior_ref = 64,
    stopped_sold_last = 65,
    stopped_out_of_seq = 66,
    fast_market = 67,
    auto_exec = 68,
    form_t = 69,
    basket_idx = 70,
    burst_basket = 71,
    MIN = none,
    MAX = burst_basket
};

inline const char **EnumNamesTradeCondition() {
    static const char *names[] = {
        "none",
        "regular",
        "cash",
        "avg_price",
        "cash_trade",
        "next_day_market",
        "opening_detail",
        "intraday_detail",
        "rule_127",
        "rule_155",
        "sold_last",
        "next_day",
        "opened",
        "seller",
        "sold",
        "stopped_stock",
        "imbalance_more_buyers",
        "imbalance_more_sellers",
        "opening_price",
        "manual",
        "iso",
        "bargain_condition",
        "converted_price_indicator",
        "exchange_last",
        "final_price",
        "ex_pit",
        "crossed",
        "cancel",
        "volume_only",
        "direct_plus",
        "acquisition",
        "bunched",
        "distribution",
        "bunched_sale",
        "split",
        "cancel_stopped",
        "cancel_eth",
        "cancel_stopped_eth",
        "out_of_seq_eth",
        "cancel_last_eth",
        "sold_last_eth",
        "cancel_last",
        "sold_last_sale",
        "cancel_open",
        "cancel_open_eth",
        "opened_sale_eth",
        "cancel_only",
        "cancel_only_eth",
        "late_open_eth",
        "auto_exec_eth",
        "reopen",
        "reopen_eth",
        "adjusted",
        "adjusted_eth",
        "spread",
        "spread_eth",
        "straddle",
        "straddle_eth",
        "stopped",
        "stopped_eth",
        "regular_eth",
        "combo",
        "combo_eth",
        "closing",
        "prior_ref",
        "stopped_sold_last",
        "stopped_out_of_seq",
        "fast_market",
        "auto_exec",
        "form_t",
        "basket_idx",
        "burst_basket",
        nullptr
    };
    return names;
}

inline const char *EnumNameTradeCondition(TradeCondition e)
{
    const size_t index = static_cast<int>(e);
    return EnumNamesTradeCondition()[index];
}

}  // namespace fb
}  // namespace schemas
}  // namespace darkfeed

#endif  // FLATBUFFERS_GENERATED_TRADECONDITIONS_DARKFEED_SCHEMAS_FB_H_
