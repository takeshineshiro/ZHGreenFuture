//
//  MadeStepModel.m
//  ZHGreenFuture
//
//  Created by elvis on 9/16/14.
//  Copyright (c) 2014 ZHiteam. All rights reserved.
//

#import "MadeStepModel.h"

@implementation MadeStepModel

+(id)praserModelWithInfo:(id)info{
    MadeStepModel* model = [[MadeStepModel alloc]init];
    if (![info isKindOfClass:[NSDictionary class]]){
        return model;
    }
    
    NSDictionary* dic = (NSDictionary*)info;
    
    model.title     = VALIDATE_VALUE(dic[@"content"]);
    model.imageUrl  = VALIDATE_VALUE(dic[@"url"]);
    
    return model;
}

@end
