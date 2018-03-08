//
//  AAXAxis.h
//  AAChartKit
//
//  Created by An An on 17/1/5.
//  Copyright © 2017年 An An. All rights reserved.
//*************** ...... SOURCE CODE ...... ***************
//***...................................................***
//*** https://github.com/AAChartModel/AAChartKit        ***
//*** https://github.com/AAChartModel/AAChartKit-Swift  ***
//***...................................................***
//*************** ...... SOURCE CODE ...... ***************

/*
 
 * -------------------------------------------------------------------------------
 *
 * 🌕 🌖 🌗 🌘  ❀❀❀   WARM TIPS!!!   ❀❀❀ 🌑 🌒 🌓 🌔
 *
 * Please contact me on GitHub,if there are any problems encountered in use.
 * GitHub Issues : https://github.com/AAChartModel/AAChartKit/issues
 * -------------------------------------------------------------------------------
 * And if you want to contribute for this project, please contact me as well
 * GitHub        : https://github.com/AAChartModel
 * StackOverflow : https://stackoverflow.com/users/7842508/codeforu
 * JianShu       : http://www.jianshu.com/u/f1e6753d4254
 * SegmentFault  : https://segmentfault.com/u/huanghunbieguan
 *
 * -------------------------------------------------------------------------------
 
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKitDefines.h>

@interface AACrosshair : NSObject

/* dashStyle enumeration
 
Solid
ShortDash
ShortDot
ShortDashDot
ShortDashDotDot
Dot
Dash
LongDash
DashDot
LongDashDot
LongDashDotDot
 
 */
typedef NSString *AACrosshairDashStyleType;

UIKIT_EXTERN AACrosshairDashStyleType const AACrosshairDashStyleTypeSolid;
UIKIT_EXTERN AACrosshairDashStyleType const AACrosshairDashStyleTypeShortDash;
UIKIT_EXTERN AACrosshairDashStyleType const AACrosshairDashStyleTypeShortDot;
UIKIT_EXTERN AACrosshairDashStyleType const AACrosshairDashStyleTypeShortDashDot;
UIKIT_EXTERN AACrosshairDashStyleType const AACrosshairDashStyleTypeShortDashDotDot;
UIKIT_EXTERN AACrosshairDashStyleType const AACrosshairDashStyleTypeDot;
UIKIT_EXTERN AACrosshairDashStyleType const AACrosshairDashStyleTypeDash;
UIKIT_EXTERN AACrosshairDashStyleType const AACrosshairDashStyleTypeLongDash;
UIKIT_EXTERN AACrosshairDashStyleType const AACrosshairDashStyleTypeDashDot;
UIKIT_EXTERN AACrosshairDashStyleType const AACrosshairDashStyleTypeLongDashDot;
UIKIT_EXTERN AACrosshairDashStyleType const AACrosshairDashStyleTypeLongDashDotDot;

AAPropStatementAndFuncStatement(copy, AACrosshair, AACrosshairDashStyleType, dashStyle); //准星线样式
AAPropStatementAndFuncStatement(copy, AACrosshair, NSString*, color); //准星线颜色
AAPropStatementAndFuncStatement(strong, AACrosshair, NSNumber*, width); //准星线宽度


@end

