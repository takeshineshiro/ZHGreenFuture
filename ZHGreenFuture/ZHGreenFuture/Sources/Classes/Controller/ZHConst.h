//
//  ZHConst.h
//  ZHGreenFuture
//
//  Created by admin on 14-8-30.
//  Copyright (c) 2014年 ZHiteam. All rights reserved.
//

#import <Foundation/Foundation.h>

#define TABBAR_COUNT 4

#define k_NAVIGATIONCTL @"k_navigation_controller"

typedef void(^ZHCompletionBlock)(BOOL isSuccess);

#define GREEN_COLOR         RGB(102,170,0)
#define GRAY_LINE           RGB(204, 204, 204)
#define WHITE_BACKGROUND    RGB(255,255,255)
#define WHITE_TEXT          RGB(255,255,255)

#define ALERT_MESSAGE(msg)  {UIAlertView* alert = [[UIAlertView alloc]initWithTitle:@"" message:msg delegate:nil cancelButtonTitle:@"yep!!" otherButtonTitles: nil];[alert show];}

#define ZHSTATUS_BAR_CHANGE @"zh_status_bar_change"
