/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:24 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBSCarPlayApplicationIcon.h>

@class NSData, NSString;

@interface _SBSCarPlayApplicationInfo : NSObject <SBSCarPlayApplicationIcon> {

	NSData* _iconImageData;
	double _iconImageScale;
	NSString* _localizedDisplayName;

}

@property (nonatomic,retain) NSData * iconImageData;                       //@synthesize iconImageData=_iconImageData - In the implementation block
@property (assign,nonatomic) double iconImageScale;                        //@synthesize iconImageScale=_iconImageScale - In the implementation block
@property (nonatomic,retain) NSString * localizedDisplayName;              //@synthesize localizedDisplayName=_localizedDisplayName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSData *)iconImageData;
-(double)iconImageScale;
-(void)setIconImageData:(NSData *)arg1 ;
-(void)setIconImageScale:(double)arg1 ;
-(void)setLocalizedDisplayName:(NSString *)arg1 ;
-(NSString *)localizedDisplayName;
@end

