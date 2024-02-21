import Logger


if __name__ == '__main__':

    log = Logger.Logger()
    log.add_item(Logger.Level.Info, "une info")
    log.add_item(Logger.Level.Error, "une erreur")
    log.add_item(Logger.Level.Info, "une autre info")
    log.add_item(Logger.Level.Warning, "un avertissement")


    print(log.report_by_Added())

    # TODO report_by_level

