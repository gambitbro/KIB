from collections import defaultdict, OrderedDict

def main():
    text = """Text mining consists in using Machine Learning for text analysis. Discover all you need to know: definition, functioning, techniques, advantages, use cases... Modern companies have a lot of data on their customers or their business sector. New digital technologies such as social networks, e-commerce, or mobile applications for smartphones give access to a vast amount of information. """

    word_count = defaultdict(lambda: 0)
    for word in text.split():
        word_count[word] += 1
    print(word_count)
    for i, v in OrderedDict(sorted(word_count.items(), key=lambda t: t[1], reverse=True)).items():
        print(i, v)
if __name__ == "__main__":
    main()