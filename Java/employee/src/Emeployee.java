
public class Emeployee implements Comparable {
    private String salary;
    private String fullName;
    public Emeployee(String salary, String fullName) {
        this.salary = salary;
        this.fullName = fullName;
    }
    public String getSalary() {
        return salary;
    }
    public void setSalary(String salary) {
        this.salary = salary;
    }
    public String getFullName() {
        return fullName;
    }
    public void setFullName(String fullName) {
        this.fullName = fullName;
    }
    @Override
    public String toString() {
        return "Emeployee salary=" + salary + ", fullName=" + fullName;
    }
    @Override
    public int compareTo(Object o) {
        if (o instanceof Emeployee) {
            Emeployee emp=(Emeployee)o;
            return this.getFullName().compareTo(emp.getFullName());
        }
        throw new UnsupportedOperationException("vdsv");
    }

   

}
