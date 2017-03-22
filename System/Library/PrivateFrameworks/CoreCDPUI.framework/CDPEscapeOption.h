/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:38 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CDPEscapeOption : NSObject {

	NSString* _title;
	unsigned long long _style;
	/*^block*/id _escapeAction;
	NSString* _progressTitle;
	NSString* _progressLabel;

}

@property (nonatomic,copy) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) unsigned long long style;              //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) id escapeAction;                         //@synthesize escapeAction=_escapeAction - In the implementation block
@property (nonatomic,copy) NSString * progressTitle;                //@synthesize progressTitle=_progressTitle - In the implementation block
@property (nonatomic,copy) NSString * progressLabel;                //@synthesize progressLabel=_progressLabel - In the implementation block
+(id)cancelOption;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(void)setEscapeAction:(id)arg1 ;
-(id)escapeAction;
-(NSString *)progressTitle;
-(void)setProgressTitle:(NSString *)arg1 ;
-(void)setProgressLabel:(NSString *)arg1 ;
-(NSString *)progressLabel;
@end

