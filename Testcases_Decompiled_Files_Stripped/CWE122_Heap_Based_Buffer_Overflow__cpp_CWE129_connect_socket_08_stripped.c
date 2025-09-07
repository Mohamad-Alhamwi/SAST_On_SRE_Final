
void FUN_00101e4c(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_0010222b(void)

{
  return;
}




void FUN_00102241(void)

{
  return;
}




void FUN_0010224c(void)

{
  return;
}




undefined8 FUN_001014f8(void)

{
  return 0;
}




void FUN_001016e5(void)

{
  int iVar1;
  int iVar2;
  ssize_t sVar3;
  void *pvVar4;
  long in_FS_OFFSET;
  int local_50;
  int local_4c;
  sockaddr local_38;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = -1;
  iVar1 = FUN_001014e9();
  if (iVar1 != 0) {
    iVar1 = socket(2,1,6);
    if (iVar1 != -1) {
      memset(&local_38,0,0x10);
      local_38.sa_family = 2;
      local_38.sa_data._2_4_ = inet_addr("127.0.0.1");
      local_38.sa_data._0_2_ = htons(0x6987);
      iVar2 = connect(iVar1,&local_38,0x10);
      if (iVar2 != -1) {
        sVar3 = recv(iVar1,local_1e,0xd,0);
        iVar2 = (int)sVar3;
        if ((iVar2 != -1) && (iVar2 != 0)) {
          local_1e[iVar2] = '\0';
          local_50 = atoi(local_1e);
        }
      }
    }
    if (iVar1 != -1) {
      close(iVar1);
    }
  }
  iVar1 = FUN_001014f8();
  if (iVar1 == 0) {
    pvVar4 = operator_new__(0x28);
    for (local_4c = 0; local_4c < 10; local_4c = local_4c + 1) {
      *(undefined4 *)((long)pvVar4 + (long)local_4c * 4) = 0;
    }
    if ((local_50 < 0) || (9 < local_50)) {
      FUN_00101d20("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)pvVar4 + (long)local_50 * 4) = 1;
      for (local_4c = 0; local_4c < 10; local_4c = local_4c + 1) {
        FUN_00101d78(*(undefined4 *)((long)pvVar4 + (long)local_4c * 4));
      }
    }
    if (pvVar4 != (void *)0x0) {
      operator_delete__(pvVar4);
    }
  }
  else {
    FUN_00101d20("Benign, fixed string");
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_001022af(void)

{
  return;
}




void FUN_001024ec(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102299(void)

{
  return;
}




void FUN_00101fb0(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101484) */
/* WARNING: Removing unreachable block (ram,0x00101490) */

void FUN_00101460(void)

{
  return;
}




void FUN_00101c9c(void)

{
  FUN_001016e5();
  FUN_001018d9();
  FUN_00101ac0();
  FUN_00101bb5();
  return;
}




void FUN_00101e77(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




ulong FUN_00102114(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00103108,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001022a4(void)

{
  return;
}




void FUN_001025d0(void)

{
  return;
}




void FUN_00101f24(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00102262(void)

{
  return;
}




void FUN_00101d78(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




undefined8 FUN_00102473(undefined8 *param_1)

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




undefined8 FUN_001021f3(void)

{
  return 1;
}




void FUN_001022d0(void)

{
  return;
}




undefined8 FUN_00101cbb(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101d20("Calling good()...");
  FUN_00101c9c();
  FUN_00101d20("Finished good()");
  FUN_00101d20("Calling bad()...");
  FUN_00101507();
  FUN_00101d20("Finished bad()");
  return 0;
}




void FUN_00101bb5(void)

{
  int iVar1;
  void *pvVar2;
  int local_18;
  int local_14;
  
  local_18 = -1;
  iVar1 = FUN_001014e9();
  if (iVar1 != 0) {
    local_18 = 7;
  }
  iVar1 = FUN_001014e9();
  if (iVar1 != 0) {
    pvVar2 = operator_new__(0x28);
    for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
      *(undefined4 *)((long)pvVar2 + (long)local_14 * 4) = 0;
    }
    if (local_18 < 0) {
      FUN_00101d20("ERROR: Array index is negative.");
    }
    else {
      *(undefined4 *)((long)pvVar2 + (long)local_18 * 4) = 1;
      for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
        FUN_00101d78(*(undefined4 *)((long)pvVar2 + (long)local_14 * 4));
      }
    }
    if (pvVar2 != (void *)0x0) {
      operator_delete__(pvVar2);
    }
  }
  return;
}




void FUN_001018d9(void)

{
  int iVar1;
  int iVar2;
  ssize_t sVar3;
  void *pvVar4;
  long in_FS_OFFSET;
  int local_50;
  int local_4c;
  sockaddr local_38;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = -1;
  iVar1 = FUN_001014e9();
  if (iVar1 != 0) {
    iVar1 = socket(2,1,6);
    if (iVar1 != -1) {
      memset(&local_38,0,0x10);
      local_38.sa_family = 2;
      local_38.sa_data._2_4_ = inet_addr("127.0.0.1");
      local_38.sa_data._0_2_ = htons(0x6987);
      iVar2 = connect(iVar1,&local_38,0x10);
      if (iVar2 != -1) {
        sVar3 = recv(iVar1,local_1e,0xd,0);
        iVar2 = (int)sVar3;
        if ((iVar2 != -1) && (iVar2 != 0)) {
          local_1e[iVar2] = '\0';
          local_50 = atoi(local_1e);
        }
      }
    }
    if (iVar1 != -1) {
      close(iVar1);
    }
  }
  iVar1 = FUN_001014e9();
  if (iVar1 != 0) {
    pvVar4 = operator_new__(0x28);
    for (local_4c = 0; local_4c < 10; local_4c = local_4c + 1) {
      *(undefined4 *)((long)pvVar4 + (long)local_4c * 4) = 0;
    }
    if ((local_50 < 0) || (9 < local_50)) {
      FUN_00101d20("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)pvVar4 + (long)local_50 * 4) = 1;
      for (local_4c = 0; local_4c < 10; local_4c = local_4c + 1) {
        FUN_00101d78(*(undefined4 *)((long)pvVar4 + (long)local_4c * 4));
      }
    }
    if (pvVar4 != (void *)0x0) {
      operator_delete__(pvVar4);
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00102257(void)

{
  return;
}




void FUN_001022c5(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00105018 == '\0') {
    if (PTR___cxa_finalize_00104fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00105008);
    }
    FUN_00101430();
    DAT_00105018 = 1;
    return;
  }
  return;
}




void FUN_00101d46(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_00102202(void)

{
  return 0;
}




void FUN_00102236(void)

{
  return;
}




void FUN_00101507(void)

{
  int iVar1;
  int iVar2;
  ssize_t sVar3;
  void *pvVar4;
  long in_FS_OFFSET;
  int local_50;
  int local_4c;
  sockaddr local_38;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = -1;
  iVar1 = FUN_001014e9();
  if (iVar1 != 0) {
    iVar1 = socket(2,1,6);
    if (iVar1 != -1) {
      memset(&local_38,0,0x10);
      local_38.sa_family = 2;
      local_38.sa_data._2_4_ = inet_addr("127.0.0.1");
      local_38.sa_data._0_2_ = htons(0x6987);
      iVar2 = connect(iVar1,&local_38,0x10);
      if (iVar2 != -1) {
        sVar3 = recv(iVar1,local_1e,0xd,0);
        iVar2 = (int)sVar3;
        if ((iVar2 != -1) && (iVar2 != 0)) {
          local_1e[iVar2] = '\0';
          local_50 = atoi(local_1e);
        }
      }
    }
    if (iVar1 != -1) {
      close(iVar1);
    }
  }
  iVar1 = FUN_001014e9();
  if (iVar1 != 0) {
    pvVar4 = operator_new__(0x28);
    for (local_4c = 0; local_4c < 10; local_4c = local_4c + 1) {
      *(undefined4 *)((long)pvVar4 + (long)local_4c * 4) = 0;
    }
    if (local_50 < 0) {
      FUN_00101d20("ERROR: Array index is negative.");
    }
    else {
      *(undefined4 *)((long)pvVar4 + (long)local_50 * 4) = 1;
      for (local_4c = 0; local_4c < 10; local_4c = local_4c + 1) {
        FUN_00101d78(*(undefined4 *)((long)pvVar4 + (long)local_4c * 4));
      }
    }
    if (pvVar4 != (void *)0x0) {
      operator_delete__(pvVar4);
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00101df6(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101efc(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104ee0)();
  return;
}




undefined8 FUN_001014e9(void)

{
  return 1;
}




undefined8 FUN_00102450(void *param_1)

{
  free(param_1);
  return 1;
}




int FUN_00102211(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_0010228e(void)

{
  return;
}




bool FUN_001023f5(pthread_t *param_1)

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




void FUN_0010250b(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_0010226d(void)

{
  return;
}




void FUN_0010252a(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101da0(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101e21(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101f7d(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00102278(void)

{
  return;
}




void FUN_00102283(void)

{
  return;
}




void FUN_001022ba(void)

{
  return;
}




void FUN_00101f4f(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001022db(void)

{
  return;
}




void FUN_001022e6(void)

{
  return;
}




void FUN_00102560(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101ea2(undefined4 param_1)

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




/* WARNING: Removing unreachable block (ram,0x00101443) */
/* WARNING: Removing unreachable block (ram,0x0010144f) */

void FUN_00101430(void)

{
  return;
}




void FUN_00101d20(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101dcc(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_001022f1(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101ac0(void)

{
  int iVar1;
  void *pvVar2;
  int local_18;
  int local_14;
  
  local_18 = -1;
  iVar1 = FUN_001014f8();
  if (iVar1 == 0) {
    local_18 = 7;
  }
  else {
    FUN_00101d20("Benign, fixed string");
  }
  iVar1 = FUN_001014e9();
  if (iVar1 != 0) {
    pvVar2 = operator_new__(0x28);
    for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
      *(undefined4 *)((long)pvVar2 + (long)local_14 * 4) = 0;
    }
    if (local_18 < 0) {
      FUN_00101d20("ERROR: Array index is negative.");
    }
    else {
      *(undefined4 *)((long)pvVar2 + (long)local_18 * 4) = 1;
      for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
        FUN_00101d78(*(undefined4 *)((long)pvVar2 + (long)local_14 * 4));
      }
    }
    if (pvVar2 != (void *)0x0) {
      operator_delete__(pvVar2);
    }
  }
  return;
}




undefined8 FUN_00102328(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_001022f1,local_18);
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




ulong FUN_00102010(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00103100,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}



