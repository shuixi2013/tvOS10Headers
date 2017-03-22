/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:52 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, SFText, SFImage, SFPunchout, NSArray;

@interface SFMediaItem : NSObject <NSSecureCoding> {

	NSString* _title;
	SFText* _subtitleText;
	SFImage* _thumbnail;
	SFImage* _reviewGlyph;
	SFImage* _overlayImage;
	NSString* _reviewText;
	SFPunchout* _punchout;
	NSArray* _subtitleCustomLineBreaking;
	NSArray* _buyOptions;
	NSString* _contentAdvisory;
	SFImage* _contentAdvisoryImage;

}

@property (nonatomic,copy) NSString * title;                                    //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) SFText * subtitleText;                             //@synthesize subtitleText=_subtitleText - In the implementation block
@property (nonatomic,retain) SFImage * thumbnail;                               //@synthesize thumbnail=_thumbnail - In the implementation block
@property (nonatomic,retain) SFImage * reviewGlyph;                             //@synthesize reviewGlyph=_reviewGlyph - In the implementation block
@property (nonatomic,retain) SFImage * overlayImage;                            //@synthesize overlayImage=_overlayImage - In the implementation block
@property (nonatomic,copy) NSString * reviewText;                               //@synthesize reviewText=_reviewText - In the implementation block
@property (nonatomic,retain) SFPunchout * punchout;                             //@synthesize punchout=_punchout - In the implementation block
@property (nonatomic,retain) NSArray * subtitleCustomLineBreaking;              //@synthesize subtitleCustomLineBreaking=_subtitleCustomLineBreaking - In the implementation block
@property (nonatomic,retain) NSArray * buyOptions;                              //@synthesize buyOptions=_buyOptions - In the implementation block
@property (nonatomic,copy) NSString * contentAdvisory;                          //@synthesize contentAdvisory=_contentAdvisory - In the implementation block
@property (nonatomic,retain) SFImage * contentAdvisoryImage;                    //@synthesize contentAdvisoryImage=_contentAdvisoryImage - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(SFImage *)thumbnail;
-(void)setThumbnail:(SFImage *)arg1 ;
-(NSString *)reviewText;
-(SFPunchout *)punchout;
-(void)setPunchout:(SFPunchout *)arg1 ;
-(NSString *)contentAdvisory;
-(void)setContentAdvisory:(NSString *)arg1 ;
-(void)setOverlayImage:(SFImage *)arg1 ;
-(SFImage *)overlayImage;
-(void)setReviewText:(NSString *)arg1 ;
-(void)setReviewGlyph:(SFImage *)arg1 ;
-(void)setSubtitleCustomLineBreaking:(NSArray *)arg1 ;
-(void)setBuyOptions:(NSArray *)arg1 ;
-(void)setContentAdvisoryImage:(SFImage *)arg1 ;
-(void)setSubtitleText:(SFText *)arg1 ;
-(SFText *)subtitleText;
-(SFImage *)reviewGlyph;
-(NSArray *)subtitleCustomLineBreaking;
-(NSArray *)buyOptions;
-(SFImage *)contentAdvisoryImage;
@end

