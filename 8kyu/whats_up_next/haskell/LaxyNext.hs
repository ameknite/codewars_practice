module LazyNext where

import Data.Maybe (listToMaybe)

next :: Eq a => a -> [a] -> Maybe a
next item = listToMaybe . drop 1 . dropWhile (/= item)
