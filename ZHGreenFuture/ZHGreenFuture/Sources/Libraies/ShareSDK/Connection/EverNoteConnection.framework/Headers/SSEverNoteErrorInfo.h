///#begin zh-cn
//
//  Created by ShareSDK.cn on 13-1-14.
//  官网地址:http://www.ShareSDK.cn
//  技术支持邮箱:support@sharesdk.cn
//  官方微信:ShareSDK   （如果发布新版本的话，我们将会第一时间通过微信将版本更新内容推送给您。如果使用过程中有任何问题，也可以通过微信与我们取得联系，我们将会在24小时内给予回复）
//  商务QQ:4006852216
//  Copyright (c) 2013年 ShareSDK.cn. All rights reserved.
//
///#end
///#begin en
//
//  Created by ShareSDK.cn on 13-1-14.
//  website:http://www.ShareSDK.cn
//  Support E-mail:support@sharesdk.cn
//  WeChat ID:ShareSDK   （If publish a new version, we will be push the updates content of version to you. If you have any questions about the ShareSDK, you can get in touch through the WeChat with us, we will respond within 24 hours）
//  Business QQ:4006852216
//  Copyright (c) 2013年 ShareSDK.cn. All rights reserved.
//
///#end

#import <Foundation/Foundation.h>
#import <AGCommon/CMErrorInfo.h>
#import "ISSEverNoteDataOutput.h"

///#begin zh-cn
/**
 *	@brief	错误信息类，用于描述印象笔记中产生的错误信息（包括：错误码、错误描述）
 */
///#end
///#begin en
/**
 *	@brief	Error message. Used to describe the error messages generated by Evernote (including: the error code, error description)
 */
///#end
@interface SSEverNoteErrorInfo : CMErrorInfo
{
@private
    NSString *_identifier;
    NSString *_key;
}

///#begin zh-cn
/**
 *	@brief	错误标识
 */
///#end
///#begin en
/**
 *	@brief	Error identifier.
 */
///#end
@property (nonatomic,copy) NSString *identifier;

///#begin zh-cn
/**
 *	@brief	错误的key标识
 */
///#end
///#begin en
/**
 *	@brief	Error key.
 */
///#end
@property (nonatomic,copy) NSString *key;

///#begin zh-cn
/**
 *	@brief	创建应用错误信息
 *
 *	@param 	reader 	数据读取器
 *
 *	@return	错误信息
 */
///#end
///#begin en
/**
 *	@brief	Create an application error info.
 *
 *	@param 	reader 	Reader object.
 *
 *	@return	Error info.
 */
///#end
+ (SSEverNoteErrorInfo *)applicationErrorWithReader:(id<ISSEverNoteDataOutput>)reader;

///#begin zh-cn
/**
 *	@brief	创建用户错误信息
 *
 *	@param 	reader 	数据读取器
 *
 *	@return	错误信息
 */
///#end
///#begin en
/**
 *	@brief	Create a user error info.
 *
 *	@param 	reader 	Reader object.
 *
 *	@return	Error info.
 */
///#end
+ (SSEverNoteErrorInfo *)userErrorWithReader:(id<ISSEverNoteDataOutput>)reader;

///#begin zh-cn
/**
 *	@brief	创建系统错误信息
 *
 *	@param 	reader 	数据读取器
 *
 *	@return	错误信息
 */
///#end
///#begin en
/**
 *	@brief	Create a system error info.
 *
 *	@param 	reader 	Reader object.
 *
 *	@return	Error info.
 */
///#end
+ (SSEverNoteErrorInfo *)systemErrorWithReader:(id<ISSEverNoteDataOutput>)reader;

///#begin zh-cn
/**
 *	@brief	创建未找到错误信息
 *
 *	@param 	reader 	数据读取器
 *
 *	@return	错误信息
 */
///#end
///#begin en
/**
 *	@brief	Create a not found error info.
 *
 *	@param 	reader 	Reader object.
 *
 *	@return	Error info.
 */
///#end
+ (SSEverNoteErrorInfo *)notFoundErrorWithReader:(id<ISSEverNoteDataOutput>)reader;

@end
