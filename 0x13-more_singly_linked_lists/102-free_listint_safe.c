{
        size_t size = 0;
        listint_t *thisNode, *tmp;

        if (h == NULL)
                return (0);

        thisNode = *h;
        while (thisNode != NULL)
        {
                size++;
                tmp = thisNode;
                thisNode = thisNode->next;
                free(tmp);

                if (tmp <= thisNode)
                        break;
        }

        *h = NULL;

        return (size);
}
