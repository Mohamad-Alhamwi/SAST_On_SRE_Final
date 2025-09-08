
void FUN_00102ce8(void)

{
  return;
}




void FUN_00101d22(undefined8 param_1)

{
  FUN_00101d82(param_1);
  return;
}




void FUN_00102cf3(void)

{
  return;
}




undefined8 FUN_00102060(undefined8 param_1)

{
  return param_1;
}




void FUN_001022fc(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_00102622(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_0010268a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_0010221f(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined4 *)FUN_00101c95(4,param_2);
  *puVar2 = uVar1;
  return;
}




undefined8 FUN_001020fa(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001023d2(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102600(long param_1)

{
  FUN_001026cc(param_1 + 0x10);
  return;
}




void FUN_00102cd2(void)

{
  return;
}




void FUN_0010254e(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_001024bd(*param_1,param_1[1],1);
  }
  return;
}




void FUN_00101ad7(void)

{
  char *pcVar1;
  long in_FS_OFFSET;
  int local_6c;
  undefined local_68 [32];
  undefined local_48 [26];
  char local_2e [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101d42(local_68);
  local_6c = -1;
  local_2e[0] = '\0';
  local_2e[1] = '\0';
  local_2e[2] = '\0';
  local_2e[3] = '\0';
  local_2e[4] = '\0';
  local_2e[5] = '\0';
  local_2e[6] = '\0';
  local_2e[7] = '\0';
  local_2e[8] = '\0';
  local_2e[9] = '\0';
  local_2e[10] = '\0';
  local_2e[0xb] = '\0';
  local_2e[0xc] = '\0';
  local_2e[0xd] = '\0';
                    /* try { // try from 00101b2e to 00101ba5 has its CatchHandler @ 00101bf1 */
  pcVar1 = fgets(local_2e,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    FUN_00102764("fgets() failed.");
  }
  else {
    local_6c = atoi(local_2e);
  }
  FUN_00101dfa(local_68,&local_6c);
  FUN_00101dfa(local_68,&local_6c);
  FUN_00101dfa(local_68,&local_6c);
  FUN_00101e34(local_48,local_68);
                    /* try { // try from 00101bad to 00101bb1 has its CatchHandler @ 00101bdc */
  FUN_00101665(local_48);
  FUN_00101d62(local_48);
  FUN_00101d62(local_68);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102c46(void)

{
  return 0;
}




int FUN_00102c55(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00102c6f(void)

{
  return;
}




void FUN_00101f30(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_0010184a(local_20);
    uVar3 = FUN_001021b4(param_1);
    FUN_001021c6(uVar3,uVar2);
    FUN_001021f0(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_00101dfa(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010179a(param_1);
  FUN_00101fae(param_1,uVar1,param_2);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101464) */
/* WARNING: Removing unreachable block (ram,0x00101470) */

void FUN_00101440(void)

{
  return;
}




void FUN_001021f0(undefined8 param_1,undefined8 param_2)

{
  FUN_001024bd(param_1,param_2,1);
  return;
}




void FUN_00101f20(void)

{
  return;
}




undefined8 FUN_00102eb7(undefined8 *param_1)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  undefined8 uVar2;
  
  *param_1 = 0;
  __mutex = (pthread_mutex_t *)malloc(0x28);
  if (__mutex == (pthread_mutex_t *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar1 = pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
    if (iVar1 == 0) {
      *param_1 = __mutex;
      uVar2 = 1;
    }
    else {
      free(param_1);
      uVar2 = 0;
    }
  }
  return uVar2;
}




void FUN_00101ccc(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_00102390(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010237e(param_2);
  FUN_00102354(param_1,uVar1);
  FUN_00101cac(param_1);
  return;
}




void FUN_001019e0(void)

{
  long in_FS_OFFSET;
  undefined4 local_5c;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101d42(local_58);
  local_5c = 7;
                    /* try { // try from 00101a24 to 00101a61 has its CatchHandler @ 00101aad */
  FUN_00101dfa(local_58,&local_5c);
  FUN_00101dfa(local_58,&local_5c);
  FUN_00101dfa(local_58,&local_5c);
  FUN_00101e34(local_38,local_58);
                    /* try { // try from 00101a69 to 00101a6d has its CatchHandler @ 00101a98 */
  FUN_00101597(local_38);
  FUN_00101d62(local_38);
  FUN_00101d62(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101c1b(void)

{
  FUN_001019e0();
  FUN_00101ad7();
  return;
}




void FUN_001025ec(void)

{
  return;
}




void FUN_00102649(undefined8 param_1,undefined8 param_2)

{
  FUN_001026ea(param_1,param_2,0);
  return;
}




undefined8 FUN_001023f0(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




undefined8 FUN_0010179a(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010182c(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010180a(undefined8 *param_1)

{
  FUN_0010184a(*param_1);
  return;
}




undefined8 FUN_00101c95(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001028e6(undefined4 param_1)

{
  long in_FS_OFFSET;
  undefined4 local_18;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  local_18 = param_1;
  printf("%ls\n",&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102ca6(void)

{
  return;
}




undefined8 FUN_00102d6c(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  pthread_t local_20;
  pthread_t *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *param_3 = 0;
  local_18 = (pthread_t *)malloc(0x18);
  if (local_18 == (pthread_t *)0x0) {
    uVar2 = 0;
  }
  else {
    local_18[1] = param_1;
    local_18[2] = param_2;
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102d35,local_18);
    if (iVar1 == 0) {
      *local_18 = local_20;
      *param_3 = local_18;
      uVar2 = 1;
    }
    else {
      free(local_18);
      uVar2 = 0;
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}




void FUN_00102865(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 * FUN_00102416(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




undefined8 FUN_0010274c(void)

{
  return 0x555555555555555;
}




void FUN_001014c9(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  int local_18;
  
  piVar2 = (int *)FUN_0010173c(param_1);
  iVar1 = *piVar2;
  pvVar3 = operator_new__(0x28);
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    *(undefined4 *)((long)pvVar3 + (long)local_18 * 4) = 0;
  }
  if (iVar1 < 0) {
    FUN_00102764("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)pvVar3 + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_001027bc(*(undefined4 *)((long)pvVar3 + (long)local_18 * 4));
    }
  }
  if (pvVar3 != (void *)0x0) {
    operator_delete__(pvVar3);
  }
  return;
}




undefined8 FUN_0010273a(undefined8 param_1)

{
  return param_1;
}




void FUN_00101fae(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_0010221f(param_3);
  p_Var2 = (_List_node_base *)FUN_00102232(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_001022fc(param_1,1);
  return;
}




void FUN_00102940(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00102993(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001024f0(undefined8 param_1)

{
  FUN_00102649(param_1,1);
  return;
}




void FUN_00102146(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = param_3;
  local_18 = param_2;
  local_10 = param_1;
  while( true ) {
    cVar1 = FUN_001023f0(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_0010243a(&local_18);
    FUN_0010245c(local_10,uVar2);
    FUN_00102416(&local_18);
  }
  return;
}




void FUN_001024bd(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102622(param_1,param_2,param_3);
  return;
}




void FUN_00102c90(void)

{
  return;
}




void FUN_00102c85(void)

{
  return;
}




void FUN_00101cac(undefined8 param_1)

{
  FUN_00101ccc(param_1);
  return;
}




void FUN_0010278a(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




bool FUN_00102e39(pthread_t *param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = pthread_join(*param_1,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1 == 0;
}




void FUN_00102514(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102677(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




undefined8 FUN_001021b4(undefined8 param_1)

{
  return param_1;
}




void FUN_00101665(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  int local_18;
  
  piVar2 = (int *)FUN_0010173c(param_1);
  iVar1 = *piVar2;
  pvVar3 = operator_new__(0x28);
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    *(undefined4 *)((long)pvVar3 + (long)local_18 * 4) = 0;
  }
  if ((iVar1 < 0) || (9 < iVar1)) {
    FUN_00102764("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)pvVar3 + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_001027bc(*(undefined4 *)((long)pvVar3 + (long)local_18 * 4));
    }
  }
  if (pvVar3 != (void *)0x0) {
    operator_delete__(pvVar3);
  }
  return;
}




void FUN_00101d42(undefined8 param_1)

{
  FUN_00101d22(param_1);
  return;
}




void FUN_00102d35(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102fa0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _DT_INIT();
  lVar1 = 0;
  do {
    (*(code *)(&__DT_INIT_ARRAY)[lVar1])(param_1,param_2,param_3);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 1);
  return;
}




void FUN_00102cfe(void)

{
  return;
}




undefined8 FUN_0010188a(undefined8 param_1)

{
  return param_1;
}




void FUN_0010258d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010221f(param_3);
  FUN_0010268a(param_1,param_2,uVar1);
  return;
}




void FUN_00102d2a(void)

{
  return;
}




void FUN_00102764(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_001021a4(void)

{
  return;
}




void FUN_00102c9b(void)

{
  return;
}




void FUN_00102f6e(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101dae(undefined8 param_1)

{
  FUN_00101f20(param_1);
  return;
}




void FUN_001021c6(undefined8 param_1,undefined8 param_2)

{
  FUN_001024aa(param_1,param_2);
  return;
}




undefined8 FUN_00101c30(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00102764("Calling good()...");
  FUN_00101c1b();
  FUN_00102764("Finished good()");
  FUN_00102764("Calling bad()...");
  FUN_0010189c();
  FUN_00102764("Finished bad()");
  return 0;
}




void FUN_00102cbc(void)

{
  return;
}




void FUN_001023d2(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_00102c37(void)

{
  return 1;
}




void FUN_00102cb1(void)

{
  return;
}




undefined8 FUN_001020aa(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001023d2(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ee8)();
  return;
}




void FUN_00102354(undefined8 param_1,undefined8 param_2)

{
  FUN_001025ec(param_1,param_2);
  return;
}




void FUN_001026cc(undefined8 param_1)

{
  FUN_0010273a(param_1);
  return;
}




void FUN_0010173c(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_0010179a(param_1);
  FUN_001017e6(&local_18);
  FUN_0010180a(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001026ea(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0010274c(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_00101dce(undefined8 param_1)

{
  FUN_00101f30(param_1);
  FUN_00101d02(param_1);
  return;
}




void FUN_00102d1f(void)

{
  return;
}




undefined8 FUN_00102e94(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_0010189c(void)

{
  char *pcVar1;
  long in_FS_OFFSET;
  int local_6c;
  undefined local_68 [32];
  undefined local_48 [26];
  char local_2e [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101d42(local_68);
  local_6c = -1;
  local_2e[0] = '\0';
  local_2e[1] = '\0';
  local_2e[2] = '\0';
  local_2e[3] = '\0';
  local_2e[4] = '\0';
  local_2e[5] = '\0';
  local_2e[6] = '\0';
  local_2e[7] = '\0';
  local_2e[8] = '\0';
  local_2e[9] = '\0';
  local_2e[10] = '\0';
  local_2e[0xb] = '\0';
  local_2e[0xc] = '\0';
  local_2e[0xd] = '\0';
                    /* try { // try from 001018f3 to 0010196a has its CatchHandler @ 001019b6 */
  pcVar1 = fgets(local_2e,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    FUN_00102764("fgets() failed.");
  }
  else {
    local_6c = atoi(local_2e);
  }
  FUN_00101dfa(local_68,&local_6c);
  FUN_00101dfa(local_68,&local_6c);
  FUN_00101dfa(local_68,&local_6c);
  FUN_00101e34(local_48,local_68);
                    /* try { // try from 00101972 to 00101976 has its CatchHandler @ 001019a1 */
  FUN_001014c9(local_48);
  FUN_00101d62(local_48);
  FUN_00101d62(local_68);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101423) */
/* WARNING: Removing unreachable block (ram,0x0010142f) */

void FUN_00101410(void)

{
  return;
}




undefined8 FUN_00102232(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001024f0(param_1);
  uVar2 = FUN_001021b4(param_1);
  FUN_00102514(local_38,uVar2,uVar1);
  uVar3 = FUN_0010221f(param_2);
  uVar4 = FUN_0010184a(uVar1);
  FUN_0010258d(uVar2,uVar4,uVar3);
  FUN_001025ca(local_38,0);
  FUN_0010254e(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_0010243a(undefined8 *param_1)

{
  FUN_00102600(*param_1);
  return;
}




void FUN_001024aa(void)

{
  return;
}




undefined8 FUN_0010221f(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102326(undefined8 param_1,undefined8 param_2)

{
  FUN_00102354(param_1,param_2);
  return param_1;
}




void FUN_001028bb(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010184a(long param_1)

{
  FUN_0010186c(param_1 + 0x10);
  return;
}




void FUN_00101d02(undefined8 param_1)

{
  FUN_00101dae(param_1);
  return;
}




long FUN_001025ca(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_001029f4(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00102d14(void)

{
  return;
}




void FUN_00102890(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102d09(void)

{
  return;
}




void FUN_00101d62(undefined8 param_1)

{
  FUN_00101dce(param_1);
  return;
}




void FUN_0010182c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_0010245c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010221f(param_2);
  uVar2 = FUN_0010179a(param_1);
  FUN_00101fae(param_1,uVar2,uVar1);
  return;
}




void FUN_00103010(void)

{
  return;
}




void FUN_001029c1(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_0010283a(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102968(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




ulong FUN_00102a54(long param_1,ulong param_2,long param_3)

{
  ushort **ppuVar1;
  long in_FS_OFFSET;
  undefined local_1c [4];
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    ppuVar1 = __ctype_b_loc();
    if (((*ppuVar1)[*(char *)(param_3 + local_18 * 2)] & 0x1000) == 0) break;
    ppuVar1 = __ctype_b_loc();
    if (((*ppuVar1)[*(char *)(param_3 + local_18 * 2 + 1)] & 0x1000) == 0) break;
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001040f0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102cc7(void)

{
  return;
}




void FUN_00102f30(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102cdd(void)

{
  return;
}




void FUN_00101597(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  int local_18;
  
  piVar2 = (int *)FUN_0010173c(param_1);
  iVar1 = *piVar2;
  pvVar3 = operator_new__(0x28);
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    *(undefined4 *)((long)pvVar3 + (long)local_18 * 4) = 0;
  }
  if (iVar1 < 0) {
    FUN_00102764("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)pvVar3 + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_001027bc(*(undefined4 *)((long)pvVar3 + (long)local_18 * 4));
    }
  }
  if (pvVar3 != (void *)0x0) {
    operator_delete__(pvVar3);
  }
  return;
}




void FUN_00102072(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010237e(param_2);
  FUN_00102390(param_1,uVar1);
  return;
}




void FUN_001027e4(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




ulong FUN_00102b58(long param_1,ulong param_2,long param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined local_1c [4];
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    iVar1 = iswxdigit(*(wint_t *)(param_3 + local_18 * 8));
    if (iVar1 == 0) break;
    iVar1 = iswxdigit(*(wint_t *)(param_3 + local_18 * 8 + 4));
    if (iVar1 == 0) break;
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001040f8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void _FINI_0(void)

{
  if (DAT_00107028 == '\0') {
    if (PTR___cxa_finalize_00106fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00107008);
    }
    FUN_00101410();
    DAT_00107028 = 1;
    return;
  }
  return;
}




long * FUN_001017e6(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_00101d82(undefined8 param_1)

{
  FUN_00101f00(param_1);
  FUN_00101cac(param_1);
  return;
}




undefined8 FUN_0010200f(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102326(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 FUN_00102677(undefined8 param_1)

{
  return param_1;
}




void FUN_00102c7a(void)

{
  return;
}




void FUN_00102f4f(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_0010186c(undefined8 param_1)

{
  FUN_0010188a(param_1);
  return;
}




void FUN_001027bc(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00102810(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101f00(undefined8 param_1)

{
  FUN_001021a4(param_1);
  return;
}




void FUN_00101e34(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102060(param_2);
  FUN_0010200f(&local_21,uVar1);
  FUN_00102072(param_1,&local_21);
  FUN_00101dae(&local_21);
  uVar1 = FUN_001020fa(param_2);
  uVar2 = FUN_001020aa(param_2);
                    /* try { // try from 00101ec0 to 00101ec4 has its CatchHandler @ 00101ec7 */
  FUN_00102146(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010237e(undefined8 param_1)

{
  return param_1;
}



