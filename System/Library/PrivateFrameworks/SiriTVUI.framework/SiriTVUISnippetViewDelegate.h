/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:43 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SiriTVUI.framework/SiriTVUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol SiriTVUISnippetViewDelegate <NSObject>
@property (nonatomic,copy,readonly) NSString * currentUtterance; 
@property (nonatomic,readonly) UIEdgeInsets contentMargins; 
@property (nonatomic,readonly) CGSize maximumContentSize; 
@property (nonatomic,readonly) double fullScreenFraction; 
@required
-(UIEdgeInsets)contentMargins;
-(NSString *)currentUtterance;
-(CGSize)maximumContentSize;
-(double)fullScreenFraction;

@end
