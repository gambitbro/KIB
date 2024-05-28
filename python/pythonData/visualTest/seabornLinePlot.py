import matplotlib.pyplot as plt
import seaborn as sns


fmri = sns.load_dataset("fmri")
sns.set_style("whitegrid")
sns.lineplot(x="timepoint", y="signal", data=fmri)
plt.show()

