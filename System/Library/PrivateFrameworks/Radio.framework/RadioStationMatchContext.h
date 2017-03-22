/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:52 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class RadioStationMatchMetadata;

@interface RadioStationMatchContext : NSObject {

	BOOL _shouldMatchArtist;
	RadioStationMatchMetadata* _matchMetadata;

}

@property (nonatomic,retain) RadioStationMatchMetadata * matchMetadata;              //@synthesize matchMetadata=_matchMetadata - In the implementation block
@property (assign,nonatomic) BOOL shouldMatchArtist;                                 //@synthesize shouldMatchArtist=_shouldMatchArtist - In the implementation block
-(id)copyMatchDictionary;
-(void)setMatchMetadata:(RadioStationMatchMetadata *)arg1 ;
-(void)setShouldMatchArtist:(BOOL)arg1 ;
-(BOOL)shouldMatchArtist;
-(RadioStationMatchMetadata *)matchMetadata;
@end

