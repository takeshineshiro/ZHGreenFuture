//
//  CatagoryModel.h
//  ZHGreenFuture
//
//  Created by elvis on 8/31/14.
//  Copyright (c) 2014 ZHiteam. All rights reserved.
//

#import "BaseModel.h"
#import "SecondCatagoryModel.h"

@interface CatagoryModel : BaseModel
@property (nonatomic,strong)NSString*   title;
@property (nonatomic,strong)NSString*   subtitle;
@property (nonatomic,strong)NSString*   backgourndImageUrl;

@property (nonatomic,strong)NSArray*    productList;

@end