#include <stdio.h>

struct PowerCompany
{
  char name[30];
  float dailyCharge;
  float usageCharge;
  float refillCharge;
  float bottleRental;
};

float annualDailyCharge(float);
float annualUsageEstimate(int, float);
float printAnnualCostEstimate(struct PowerCompany *, int, float);

int main()
{
  // total kWh usage for a whole year from August - July
  const int total = 5627;
  const float bottlesPerYear = 6.5;

  struct PowerCompany flickElectric = {"Flick", 1.0350, 0.2199, 134.55, 0.483};
  struct PowerCompany frankEnergy = {"Frank - Low user", 0.69, 0.2461, 140.00, 0.00};
  struct PowerCompany frankEnergy2 = {"Frank - Standard user", 1.3225, 0.2174, 140.00, 0.00};
  struct PowerCompany pulseEnergy = {"Pulse Energy", 1.035, 0.235, 134.55, 0.483};

  float flickElectricCost = printAnnualCostEstimate(&flickElectric, total, bottlesPerYear);
  float frankEnergyCost = printAnnualCostEstimate(&frankEnergy, total, bottlesPerYear);
  float frankEnergy2Cost = printAnnualCostEstimate(&frankEnergy2, total, bottlesPerYear);
  float pulseEnergyCost = printAnnualCostEstimate(&pulseEnergy, total, bottlesPerYear);
}

float annualDailyCharge(float charge)
{
  return 365 * charge;
}

float annualUsageEstimate(int total, float charge)
{
  return total * charge;
}

float printAnnualCostEstimate(struct PowerCompany *company, int total, float bottlesPerYear)
{
  float annualDailyChargeEstimate = annualDailyCharge(company->dailyCharge);
  float annualUsageEstimateValue = annualUsageEstimate(total, company->usageCharge);
  float annualBottleChargeEstimate = 12 * company->bottleRental;
  float annualBottleRefillChargeEstimate = bottlesPerYear * company->refillCharge;
  float annualLPGCostEstimate = annualBottleChargeEstimate + annualBottleRefillChargeEstimate;
  float annualCostEstimate = annualDailyChargeEstimate + annualUsageEstimateValue + annualLPGCostEstimate;

  printf("\n%s\n", company->name);
  printf("Annual daily charge estimate: $%.2f\n", annualDailyChargeEstimate);
  printf("Annual usage charge estimate: $%.2f\n", annualUsageEstimateValue);
  printf("Annual LPG cost estimate: $%.2f\n", annualLPGCostEstimate);
  printf("Annual cost estimate: $%.2f\n", annualCostEstimate);

  return annualCostEstimate;
}