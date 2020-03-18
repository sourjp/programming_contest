import collections

def insert_card(card_number, card_list):
    i = 0
    while i < card_number:
        card_list.append(input())
        i += 1


blue_card_number = int(input())
blue_card_list = []
insert_card(blue_card_number, blue_card_list)

red_card_number = int(input())
red_card_list = []
insert_card(red_card_number, red_card_list)

blue_card_collection = collections.Counter(blue_card_list)
red_card_collection = collections.Counter(red_card_list)

result_card_collection = blue_card_collection - red_card_collection

answer_collection = sorted(result_card_collection.items(), key=lambda x:x[1], reverse=True)

if answer_collection == []:
    print(0)
else:
    print(answer_collection[0][1])
