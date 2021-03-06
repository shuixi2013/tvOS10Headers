//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVHSPreviewTableNavagationViewController.h"

@class TVHSMovieGenresNavigationItem, TVHSMoviesByNameNavigationItem, TVHSUnwatchedMoviesNavigationItem;

@interface TVHSMoviesNavigationViewController : TVHSPreviewTableNavagationViewController
{
    TVHSMoviesByNameNavigationItem *_moviesByNameNavigationItem;	// 8 = 0x8
    TVHSUnwatchedMoviesNavigationItem *_unwatchedMoviesNavigationItem;	// 16 = 0x10
    TVHSMovieGenresNavigationItem *_movieGenresNavigationItem;	// 24 = 0x18
}

@property(retain, nonatomic) TVHSMovieGenresNavigationItem *movieGenresNavigationItem; // @synthesize movieGenresNavigationItem=_movieGenresNavigationItem;
@property(retain, nonatomic) TVHSUnwatchedMoviesNavigationItem *unwatchedMoviesNavigationItem; // @synthesize unwatchedMoviesNavigationItem=_unwatchedMoviesNavigationItem;
@property(retain, nonatomic) TVHSMoviesByNameNavigationItem *moviesByNameNavigationItem; // @synthesize moviesByNameNavigationItem=_moviesByNameNavigationItem;
- (void).cxx_destruct;	// IMP=0x0000000100028104
- (void)updateWithMoviesSortedByName:(id)arg1 movieGenres:(id)arg2 movieGenreToMoviesMap:(id)arg3 unwatchedMovies:(id)arg4;	// IMP=0x0000000100027efc
- (id)initWithDataClient:(id)arg1 unwatchedMoviesNavigationItem:(id)arg2 moviesByNameNavigationItem:(id)arg3 movieGenresNavigationItem:(id)arg4 mediaCategorySettings:(id)arg5;	// IMP=0x0000000100027d24
- (id)initWithDataClient:(id)arg1;	// IMP=0x0000000100027bdc

@end

